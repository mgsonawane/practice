def cir(a, k, queries):
    n=len(a)
    k=k%n
    res=[]
    if k==n:
        res=a
    else :
        for i in range(0,k):
            j=len(a)-1
            while(j>0):
                temp=a[j]
                a[j]=a[j-1]
                a[j-1]=temp
                j-=1
    
    for i in range(0,len(queries)):
        res.append(a[queries[i  ]])

    print a

cir([1 ,2 ,3],3,[0,1,2])
