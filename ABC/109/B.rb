words = readlines.map{|i| i.chomp}
words.shift

rlt = nil

if words == words.uniq
  pword = words.shift
  words.each do |word|
    unless pword[-1] == word[0]
      rlt = 'No'
      break
    end
    pword = word
  end
else
  rlt = 'No'
end


puts rlt || 'Yes'


