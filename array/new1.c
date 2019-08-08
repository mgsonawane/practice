#include<stdio.h>
void sort(int a[],int n)
{
	int  temp=0,i,j;
	for(i=0 ; i<n-1; i++)
	{
	  for(j=0; j<n-1; j++)
	  	{
	    	 temp=a[j];
		 a[j]=a[j+1];
		 a[j+1]=temp;
		}
	}	
printf("sorted array is");
for (i=0;i<n;i++)
{
printf(" %d  ",a[i]);
}

}
	
int main()
{
int i,n,max=0,min=100;
int donkey[100];
printf("How many no.s??");
scanf("%d",&n);
for (i=0;i<n;i++)
{
scanf("%d",&donkey[i]);
}
/*for (i=0;i<n;i++)
{
  
if(max<donkey[i])
{	max=donkey[i];
	
}
if(min>donkey[i]) 		


min=donkey[i];
	
//printf(" %d  " ,donkey[i]);
}*/

sort(donkey,n);


//printf("max= %d  " ,max);

//printf("min= %d ",min);

return 0;
}
