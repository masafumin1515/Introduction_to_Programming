w = gets.chomp
count = 0

while (ex_string = gets.chomp) != "END_OF_TEXT"
    string = ex_string.downcase.split(/ /)
    n = string.length-1
    for i in 0..n
        if w == string[i]
            count += 1 
        end
    end

end

puts count