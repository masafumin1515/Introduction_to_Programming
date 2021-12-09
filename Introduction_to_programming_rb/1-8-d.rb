a = gets.chomp.split(//)
b = gets.chomp
a_len = a.length-1

answer = "No"

for j in 0..a_len
    x = a[-1]
    for i in 0..a_len-1
        a[i-1]=a[i]
    end
    a[-2] = x
    if  /#{b}/ =~ a.join
        answer = "Yes"
    end
end

puts "#{answer}"
