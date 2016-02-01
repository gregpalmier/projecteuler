#!/usr/bin/env ruby
#n! means n × (n − 1) × ... × 3 × 2 × 1
# For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
# and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
# Find the sum of the digits in the number 100!
num = 1
(1..100).each do |i|
  num = num * i
end
p num
ans = 0
num.to_s.split('').each do |k|
  ans += k.to_i
end
p ans
