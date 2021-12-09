# sum_T = 0
# count_T = 0
# sum_H = 0
# count_H = 0
# alp="abcdefghijklmnopqrstuvwxyz".split(//)

# gets.to_i.times do
#     str=gets.chomp.split(/ /)
#     card_T=str[0].split(//)
#     card_H=str[1].split(//)
#     card_T_len=card_T.length-1
#     card_H_len=card_H.length-1

#     for j in 0..card_T_len
        
#         if card_T == card_H
#             sum_T+=1
#             sum_H+=1
#             break
#         end

#         if /#{str[0]}/ =~ str[1]
#             sum_H+=3
#             break
#         elsif /#{str[1]}/ =~ str[0]
#             sum_T+=3
#             break
#         end

#         for i in 0..25
#             break if alp[i] == card_T[j]
#             count_T += 1
#         end

#         for i in 0..25
#             break if alp[i] == card_H[j]
#             count_H += 1
#         end

#         if count_T > count_H
#             sum_T+=3
#             break
#         elsif count_T < count_H
#             sum_H+=3
#             break
#         else
#         end
#     end
#     count_T=0
#     count_H=0

# end

# puts "#{sum_T} #{sum_H}"

scoret, scoreh = 0, 0
gets.to_i.times do
  taro, hanako = gets.split(" ")
  if taro == hanako
    scoret += 1
    scoreh += 1
  else
    if taro > hanako
      scoret += 3
    else
      scoreh += 3
    end
  end
end
puts [scoret, scoreh].join(" ")

#はぁ？ 文字列＞文字列　=>　アルファベット大きい順ってこと意味するんかい！！
#結論 文字列比較は標準装備