def nn (n,m,s):
#	mm=(s+m)%(n+1)
	mm=(s+m)%n -1
	if mm < 0:
		print 1
	elif mm==0:
		print "this",n
	else:
		print mm

nn(3,3,1)
