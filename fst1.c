#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("enter both no");
	scanf("%d %d",&a,&b);

while(b!=1)
{
	a+=a;
	b--;
}
printf("\n%d\n",a);
return 0;
}

