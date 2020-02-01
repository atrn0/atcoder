$n, k = gets.split.map(&:to_i)
$ary = []
s = 0
i = 0
until s > 2*$n
  s = k*(i+1)
  $ary << s
  i+=1
end

$r = 0

def fun(a, b, c)
  if b == 3 && a == c
    $r += 1
  elsif b != 3
    $ary.each do |i|
      ic = i-c
      if ic > 0 && ic <= $n
        fun(a, b+1, ic)
      end
    end
  end
end

$n.times do |j|
  fun(j+1, 0, j+1)
end

puts $r
