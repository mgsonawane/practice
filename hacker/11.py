def gem(arr):
    l=[]
    for i in arr[0]:
	if i not in l:
		l.append(i)
    l1=[]
    for i in arr:
	l2=[]
	for j in i:
		if j not in l2:
			l2.append(j)
	for k in l2:
		l1.append(k)
    n=len(arr)
    cn=0
    for i in l:
	if l1.count(i)==n :
		cn+=1
    print cn	
gem(["abcdde","baccd","eeabg"])
