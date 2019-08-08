def alternate(s):
    s1=[]
    s1=sorted(s)
    s2=[]
    for i in s1:
        if i not in s2:
            s2.append(i)
    s3=[]
    for i in range(0,len(s2)-1):
        for j in range(i+1,len(s2)):
            s3.append([s2[i],s2[j]])  
    maxx=0 
    for i in range(0,len(s3)):
        flag=0
        cnt=0
	cnt1=0
        s4=[]
        for j in range(0,len(s)):
            if s3[i][0] == s[j] or s3[i][1] == s[j] :
                s4.append(s[j])
	    else:
		continue
        for j in range(0,len(s4)-2) :
            if s4[j] == s4[j+2]:
                cnt+=1
	if (cnt>=len(s4)-2):
		cnt1=cnt+2
	if maxx<cnt1 :
		maxx=cnt1
    print maxx

s="beabeefeab"
alternate(s)
