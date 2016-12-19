#!/usr/bin/env ruby
#A palindromic number reads the same both ways.
#The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
#
#Find the largest palindrome made from the product of two 3-digit numbers.
answer = 0
(100..999).each do |a|
  (100..999).each do |b|
    num = a * b
    if num.to_s.eql?(num.to_s.reverse) && num > answer
      answer = num
    end
  end
end

puts answer
