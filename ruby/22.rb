require 'csv'
a = CSV.read("0022_names.txt").flatten.sort
index = 1
ans = 0
a.each do |w|
    c = 0
    w.split("").each do |b|
      c = c + (b.ord - 64)
    end
    ans = ans + (c * index)
    index = index + 1
end
puts ans