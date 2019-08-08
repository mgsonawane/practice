#include<stdio.h>
#include<stdlib.h>
typedef int bool;
//#define TRUE 1;
//#define FALSE 0;

bool check(int *ar,int n)
{
int first,last,flag=0,i;
for(i=0;i<(n/2)+1;i++)
{
first=i;
last=(n-1)-i;
if (first <= last)
	{if (ar[first]==ar[last])
		{
		 int man1=ar[first],man2=ar[last],res=0,a;
			 while(man1!=0)
			 {
				a=man1%10;
				man1=man1/10;
				res=(res*10)+a;
			 }	
			 if (ar[first] != res)
        	             {
				return 0;
			     }
			 res=0;
			 while(man2!=0)
			 {
				a=man2%10;
				man2=man2/10;
				res=(res*10)+a;
			 }	
			 if (ar[first] != res)
        	             {
				return 0;
			     }
		}
	 else return 0;
	}

}
return 1;
}


int main()
{
int i,n,a=1;
printf("how many numbers??");
scanf("%d",&n);
int *ar=(int*)malloc(sizeof(int));
printf("Enter ip array");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
a=check(ar,n);
if(a==0)
printf("FALSE");
else 
printf("TRUE");
	
return 0;
}
