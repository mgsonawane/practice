def be(s):
	l=''
	flag=0
	i=1
	a=0
	while(i<len(s)):
		a=s[ :i]
		l=a
		j=1
		while(len(l)<len(s)):
			l=l+str(int(a)+j)
			j=j+1
		if (l==s):
			flag=1
			break	
		i=i+1

	if flag==1 :
		print "Yes",a
	else: 
		print "No"

be("9899100")
