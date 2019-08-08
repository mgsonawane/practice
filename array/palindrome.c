#include<stdio.h>
#include<stdlib.h>


int checkpal(int *ar,int n)
{
int i,j,count=0,final=0;
for(i=0;i<n;i++)
{
  for(j=n;j<0;j--)
  {
	if(ar[i]==ar[j])
	{
   	count+=1;
	i+1;
	break;
	}

  }
  if(final<count)
  {
  final=count;
  }
}
printf("%d",final);
return 0;
}

int main()
{
int i,n;
printf("how many elements??");
scanf("%d",&n);

int *ar=(int *)malloc(sizeof(int)*n);

for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
checkpal(ar,n);

return 0;
}
