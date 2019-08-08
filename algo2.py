lst1=[1,2,3,-1]
n=len(lst1)
lst2=[]
for i in range(1,n+1):
	lst2.append(i)
pos=0
for i in range(0,len(lst1)):
	if lst2[i] not in lst1:
		print lst2[i]

