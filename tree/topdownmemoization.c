#include<stdio.h>
int a[100];
int fib(int n)
{
if(n<=1)
	a[n]=1;
else
	a[n]=fib(n-1)+fib(n-2);
return a[n];
}
int main()
{
int n;
printf("Enter n");
scanf("%d",&n);
fib(n);
for(int i=0;i<n;i++)	
	printf(" %d ",a[i]);
return 0;
}
