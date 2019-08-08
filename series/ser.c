#include<stdio.h>
int main()
{
int i,n,j,ar[200],a=0,b=0,mm=1;
scanf("%d",&n);
//int *ar=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
{
	if(a<b)
	{
		ar[i] = ((ar[a]) + (ar[b])) ;
		a=a+1;
	}
	else
	{
		b=i;
		mm=mm*5;
		ar[b]=mm;
		a=0;
	}
}
for(i=0;i<n;i++)
{
printf("\n%d\n",ar[i]);
}
return 0;
}
