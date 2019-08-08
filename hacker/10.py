def fun(s):
    a=[]
    b=[]
    n=[]
    n=len(s)
    for i in range(0,int(n-1/2)-1):
       a.append(abs(ord(s[i])-ord(s[i+1])))
       b.append(abs(ord(s[n-(i+1)]) - ord(s[n -(i+2)]  ) ))
    print a
    print b
    if a==b :
        return "Funny"
    else  :
        return "Not Funny"

fun("acxz")
