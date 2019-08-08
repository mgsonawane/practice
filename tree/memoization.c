#include<stdio.h>
int a[100];
int fib(int n)
{
if(n<=1)
	a[n]=1;
else
	a[n]=a[n-1]+a[n-2];
return 0;
}
int main()
{
int n;
printf("Enter n");
scanf("%d",&n);
for(int i=0;i<n;i++)
	fib(i);
for(int i=0;i<n;i++)	
	printf(" %d ",a[i]);
return 0;
}
