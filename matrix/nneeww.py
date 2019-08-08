matr=[[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
n=len(matr)
e=n*2
f=n**2
c=0
cnt=0
while(cnt < len(matr)) :
	cnt1=0
	cnt+=1
	summ=0
	a=0
	b=c
	while(cnt1 < e-1 ):
		#print cnt ," ",cnt1
		if (cnt1 < n-1):
			summ+=matr[a][b]
			a+=1
		else:
			summ+=matr[a][b]
			b+=1	
			
		cnt1+=1
	print summ
	c+=1	
	n-=1
	e-=2
