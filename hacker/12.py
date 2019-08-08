def be(b):
    cn=0
    i=0
    b1=b
    b=[]
    b=list(b1)
    print b
    while(i<len(b)-2):
        if b[i]=='0' and b[i+1]=='1' and b[i+2]=='0' :
            b[i+2]='1'
            cn+=1
            i+=2
        else :
            i+=1
  
    print cn

be("0101010")
