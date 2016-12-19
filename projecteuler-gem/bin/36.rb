#!/usr/bin/env ruby
#The decimal number, 585 = 10010010012 (binary), is palindromic in both bases.
#Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.
#(Please note that the palindromic number, in either base, may not include leading zeros.)
answer = 0
(1..1000000).each do |num|
  if num.to_s.eql?(num.to_s.reverse) && num.to_s(2).eql?(num.to_s(2).reverse)
    answer += num
  end
end
puts answer
