#!/usr/bin/env ruby

1000000.times do |num|
    next if num == 0
    if (2 * num).to_s.split("").sort == \
      (3 * num).to_s.split("").sort && \
      (4 * num).to_s.split("").sort == \
      (5 * num).to_s.split("").sort && \
      (6 * num).to_s.split("").sort ==
      (2 * num).to_s.split("").sort
      then
      puts "num: #{num}"
      exit
    end
end
