#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b;

printf("Enter 2 no");
scanf("%d %d",&a,&b);

a=a+b;
b=a-b;
a=a-b;



printf("%d\n%d\n",a,b);


}
