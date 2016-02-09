#!/usr/bin/env ruby
# The series, 1^ + 2^2 + 3^3 + ... + 10^10 = 10405071317.
# Find the last ten digits of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000.
#
num = 0
(1..1000).each do |n|
  num = num + (n**n)
end
puts num.to_s.split('').to_a.last(10).join
