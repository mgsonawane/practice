def su(s):
    l=[]
    l=list(s)
    flag=0
    i=0
    while(i<len(l)-1):
	print i
        if (l[i]==l[i+1]) :
	    	l=l[:i]+l[i+2:]
		i=0
	else :
		i+=1
    if  len(l)==0:
        return "Empty String"
    else :
        print l
s="aaabccddd"
su(s)
