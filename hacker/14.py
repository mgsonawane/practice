#"Anagram"
def an(s):
    n=len(s)
    n1=int(n/2)
    a1=[]
    a2=[]
    if n%2 != 0:
        print -1
    else   :
        for i in range(0,n1) :
            a1.append(s[i])
            a2.append(s[n-(i+1)])
        cnt=0
	i=0
        while(i<len(a1)) :
            if a1[i] in a2:
		a2.pop(a2.index(a1[i]))
		i+=1
	    else :
		cnt+=1
		i+=1
                
        print cnt    

an("xulkowreuowzxgnhmiqekxhzistdocbnyozmnqthhpievvlj")
