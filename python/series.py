n=input("enter ip")
n=int(n)
m=5
my=[]
my.append(5)
j=p=0
my1=0
for i in range(0,n):
	if (j==p):
		m=m*5
		my.append(m)
		p=len(my)-1
		print (p)
		j=0
		mm=p
	else:
		my1=(my[j]+my[mm])
		j+=1
		mm+=1
		my.append(my1)

print(my)
