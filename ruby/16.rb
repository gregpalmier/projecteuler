#!/usr/bin/env ruby
# 215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

# What is the sum of the digits of the number 21000?
num = (2**1000).to_s
k = 0
num.split('').each do |j|
  k += j.to_i
end
p k
