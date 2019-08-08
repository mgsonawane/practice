#include<stdio.h>
#include<stdlib.h>

int rotation(int a[],int n)
{
int i;
for(i=0;i<n-1;i++)
{
int temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
}
return 0;
}
int main()
{
	int n=5,i,sum1=0,j,sum;
int a[]={2,3,4,5,6};
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
 sum+=j*a[j];
}
	if(sum1<sum)
	{
		printf("  %d     ",sum);
	sum1=sum;
	}
rotation(a,n);
}
printf("%d",sum1);
return 0;
}

