#include<stdio.h>
#include<stdlib.h>
int mm=0;
int perfectprime(int n, int c)
{
if(c>0)
	if(n%c==0)
	{
		
		mm+=c;
		perfectprime(n,c-1);
	}
	else
		perfectprime(n,c-1);
else
	
	return mm;
	mm=0;
}

int main()
{
int i,n,p,c;
printf("Enter n");
scanf("%d",&n);

for(i=1 ;i<n+1 ;i++  )
{

c=i/2;
p=perfectprime(i,c);
if(p > 1)
{
printf("%d is not prime\n",i);
}
else
{
printf("%d is  prime\n",i);
}
if(p==i)
{
printf("%d is perfect no.\n",i);
}

}

return 0;
}
