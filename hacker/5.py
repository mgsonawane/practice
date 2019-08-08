def ma(s):
    a=s.count('S')
    b=s.count('O')
    cnt=0
    ss=int((len(s)/3))*2
    oo=int((len(s)/3))
    cnt=(ss+oo) - (a+b)
    print cnt

ma("SOSOOSOSOSOSOSSOSOSOSOSOSOS")
