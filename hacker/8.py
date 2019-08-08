def st(s):
	j=0
	l=""
	ll=""
	if s[0] == '9' :
		while(s[j]=='9'):
			l=l+'9'
			j+=1
		ll=l
		for i in range(1,(len(s)/(len(l)+1))+1):
			ll=ll+str(int(l)+i)
		if ll==s:
			lll="Yes"+" "+s[0]
			print lll 
	else :
		ma=len(s)/2			
st("99100101")
