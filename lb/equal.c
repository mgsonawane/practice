#include<stdio.h>
int sort(int n)
{
int a=0;
while(n != 0 )
{
a+=n%10;
n=n/10;
}
return a;
}


int main()
{
int val=0,n,val1=0;
printf("Enter digit");
scanf("%d",&n);
val=sort(n);
printf("Enter digit");
scanf("%d",&n);
val1=sort(n);
if (val1==val)
	printf("HA RE NANA SAME AHET @@@@ DEKH LO\n");
else
	printf("!!!!!....NAHI HO BHAVA..!!!!!\n");
return 0;
}
