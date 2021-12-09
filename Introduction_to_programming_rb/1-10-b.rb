include Math
def slh(a,b,c)
    c=c*PI/180
    s=0.5*a*b*sin(c)
    l=a+b+(a**2+b**2-2*a*b*cos(c))**0.5
    h=b*sin(c)
    printf("%.4f\n%.4f\n%.4f",s,l,h)
end

slh(*gets.split(" ").map(&:to_f))
