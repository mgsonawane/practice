def we(s, queries):
        cnt=[]
	i=0
	a=0
        a=ord(s[i])-96
	s=s+'0'
        while(i<len(s)-1):
            a=ord(s[i])-96
            cnt.append(a)
            b=a
            while(s[i]==s[i+1]):
                b+=a
                cnt.append(b)
		i+=1
            i+=1
	print cnt
        y="Yes"
        n="No"
        re=[]
        for i in queries:
            if i in cnt :
                re.append(y)
            else:
                re.append(n)
        print  re
q=[9,7,8,12,5]
we("aaabbbbcccddd",q)
