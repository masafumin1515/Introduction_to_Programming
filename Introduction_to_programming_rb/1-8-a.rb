# puts gets.split(//).map{|cha|
#   if cha == cha.upcase
#     cha.downcase
#   else
#     cha.upcase
#   end
#   }.join

puts gets.split(//).map{|cha|
    if cha == cha.upcase
        cha.downcase
    else 
        cha.upcase
    end
}.join

#split(/,/)で , を見つけたら区切る ,は要素に含まれない
#split(//)で一文字ずつ配列に格納
# fAIR, LATER, OCCASIONALLY CLOUDY.
# ["f", "A", "I", "R", ",", " ", "L", "A", "T", "E", "R", ",", " ", "O", "C", "C", "A", "S", "I", "O", "N", "A", "L", "L", "Y", " ", "C", "L", "O", "U", "D", "Y", ".", "\n"]