# while (arr=gets.split("").map(&:to_i)) != [0]
#     sum=0
#     arr.each do |num|
#         sum += num
#     end
#     puts sum
# end

#謎のRuntimeError!!!!!!

while (n = gets.to_i) != 0
    puts n.to_s.split("").map(&:to_i).inject(:+)
end