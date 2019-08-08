def ca(s, k):
    l=[]
    for i in s:
        l.append(ord(i))
    op=""
    print l
    for i in l:
        if (i>64 and i<91):
            summ=i+k
            while summ >90 :
                summ=64+(summ-90)
        elif (i>96 and i<123):
            summ=i+k
            while summ >122 :
                summ=96+(summ-122)
	else :
		summ=i
        op=op+chr(summ)
    print op

ca("www.abc.xy",87)
