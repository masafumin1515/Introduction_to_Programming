while (str = gets.chomp.split(//)) != ["-"]
    gets.to_i.times do
      str.push(*str.shift(gets.to_i))
    end
    puts str.join
end

#*args　引数に*をつける => 可変長の引数 配列の要素数が不定の時などに使う
#push Arrayクラスメソッド 要素を追加する 引数は配列
#shift Arrayクラスメソッド 引数は整数 先頭の要素を取り出す
#join Arrayクラスメソッド nilは無視されるっぽい
