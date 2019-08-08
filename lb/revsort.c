#include<stdio.h>
int sort(int n)
{
int a[n],i=0,j;
while(n != 0 )
{
a[i]=n%10;
n=n/10;
i++;
}

n=i;
int temp;
int valu=0,p=1;
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-1;j++)
	{
		if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}
}
for(i=n-1;i>-1;i--)
{
valu+=a[i]*p;
p=p*10;
}
return valu;
}


int main()
{
int val,n;
printf("Enter digit");
scanf("%d",&n);
val=sort(n);
printf("output is %d",val);
}
