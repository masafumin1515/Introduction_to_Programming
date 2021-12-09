# while (n=gets.to_f) != 0
#     s=gets.chomp.split(/ /).map(&:to_f)
#     sum=0
#     for i in 0..n-1
#         sum+=s[i]
#     end
#     ave = sum/n
#     err=0
#     for i in 0..n-1
#         err+=(s[i]-ave)**2
#     end
#     printf("%.7f",(err/n)**0.5)
# end

loop do
    n = gets.to_i
    break if n == 0
    a = gets.split.map(&:to_f)
    p Math.sqrt(a.map {|x| x ** 2 }.inject(:+) / n - (a.inject(:+) / n) ** 2)
end