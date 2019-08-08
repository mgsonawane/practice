#include<stdio.h>
int main()
{
int a,b;

printf("Enter 2 no");
scanf("%d %d",&a,&b);

if (a && b == a)
	printf("SAME");
else
	printf("NOT SAME");

return 0;
}
