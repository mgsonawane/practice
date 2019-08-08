#include<stdio.h>

int main()
{
int a[100],c=1,d;
int i=0,n=5;
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<9;i++)
{
d*=d;
}
d=d+7;
printf("%d \n",d);

for (i=0;i<n;i++)
{
c=(c*a[i]);
}
printf("%d  " ,c);

return 0;
}
