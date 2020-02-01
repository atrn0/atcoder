h, w = gets.split.map(&:to_i)
r = []

h.times do
  if (s = gets.chomp) == "."*w
    next
  end
  r << s.split('')
end

p r
h = r.size
r = r.transpose

p r
p ["."]*h

w.times do |i|
  if r[i] == ["."]*h
    r.delete_at(i)
  end
end

p r

r = r.transpose

r.size.times do |j|
  puts r[j].join('')
end
  
