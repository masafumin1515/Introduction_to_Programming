input=readlines.join.downcase.split(//)
n=input.length-1
alp=("abcdefghijklmnopqrstuvwxyz".split(//))
count=Array.new(26,0)


for i in 0..n
    for j in 0..25
        if input[i] == alp[j]
            count[j]+=1
        end
    end
end

for i in 0..25
    puts("#{alp[i]} : #{count[i]}")
end


