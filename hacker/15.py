def beautifulDays(i, j, k):
    cnt=0
    for m in range(i,j+1):
        rev=0
        m1=m
        while (m1 != 0):
            rev=rev*10
            rev=rev+(m1%10)
            m1=m1/10
	
        if (m-rev)%k == 0 :
            cnt+=1
    print cnt 
beautifulDays(13, 45, 3)
