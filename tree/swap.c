#include<stdio.h>
int swap(int *a,int *b)
{
int t=*a;
*a=*b;
*b=t;
}
int main()
{
int a=5,b=6;
swap(&a,&b);
printf(" %d %d",a,b);
return 0;
}
