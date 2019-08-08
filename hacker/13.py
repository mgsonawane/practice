def pa(s):
    n1=len(s)
    n=int(len(s)/2)
    flag=-1
    i=0
    while(i<len(s)) :
        if s[i] != s[n1-(i+1)] :
	    if (ord(s[i+1]) == ord(s[n1-(i+3)])) and (ord(s[i])== ord(s[n1-(i+2)]))  :
		flag=n1-(i+1)
		break
            elif ord(s[i+1]) == ord(s[n1-(i+1)]):
                flag=i
		break
            else :
                flag=n1-(i+1)
		break
	else:
		i+=1
    if flag != -1:
        print flag
    else :
        print -1

pa("hgygsvlfcwnswtuhmyaljkqlqjjqlqkjlaymhutwsnwcwflvsgygh")
