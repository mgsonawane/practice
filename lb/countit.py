fp=open("a.asm",'r')
fp1=fp.readlines()
fp2=[]
count=0;
for i in range(0,len(fp1)):
	fp2=(fp1[i].split());
	for j in range (0,len(fp2)):
		fp3=[]
		if (fp2[j]=='dd'):
			fp3=(fp2[j+1].split(','))
			count+=(len(fp3)*4)	
		if (fp2[j]=='db'):
			fp3=(fp2[j+1].split(','))
			if(fp3[0].startswith("\"")):
					count+=len(fp3[0])-2
			else:	
			#	print (len(fp3))
				count+=len(fp3)*2

print count
					
