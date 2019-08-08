#include<stdio.h>
int fact(int n)
{
int i,res=1,res1=0;

for(i=1;i<n+1;i++)
{
res=res*i;
res1=res1+res;
}
return res1;
}

int main()
{
int n,r;
scanf("%d",&n);
r=fact(n);
printf("op is::%d",r);
return 0;
}
