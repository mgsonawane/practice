n=input()
for i in range (0,n):
	lst=""
	for j in range(0,n):
		if (j<=i):
			lst=lst+"*"
		else :
			lst=lst+" "
	print lst
