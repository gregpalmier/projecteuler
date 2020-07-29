#!/usr/bin/env ruby
# The number, 197, is called a circular prime because all rotations of the digits: 197, 971, and 719, are themselves prime.
# There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.
# How many circular primes are there below one million?

require 'prime'
MAX=1000000
circular = []
(2..MAX).each do |num|
  next unless Prime.prime?(num)
  p "Trying #{num} . . ."
  is_circular = false
  test = num.to_s.split('')
  (1..num.to_s.length).each do |n|
    is_circular = if Prime.prime?(test.rotate(n).join.to_i) then
                    true
                  else
                    false
                  end
    break unless is_circular
  end
  p "#{num} is a circular prime . . ."
  circular << num if is_circular
end

p "#{circular.count} circular primes below #{MAX}"
