str = gets.chomp.split(//)

def pri(arr,bgn,end)
    puts arr[bgn..end].join
end

def rvs(arr,bgn,end)
    arr[bgn..end].reverse!
end





gets.to_i.times do
    cmnd = gets.split(/ /)
    case cmnd[0]
    when "print"
        pri(arr,cmnd[1].to_i,cmnd[2]_to.i)
    when "reverse"
        rvs(arr,cmnd[1].to_i,cmnd[2]_to.i)
    when "replace"
        rpl(arr,cmnd[1].to_i,cmnd[2]_to.i,cmnd[3]) 
    end
end
