x=gets.split(/ /).map(&:to_f)
dst = ((x[0] - x[2])**2 + (x[1] - x[3])**2)**0.5
printf("%.4f",dst)

# def dis(a, b, x, y)
#     return ((a - x) ** 2 + (b - y) ** 2) ** 0.5
#   end
#   puts sprintf("%.4f", dis(*gets.split(" ").map(&:to_f)))