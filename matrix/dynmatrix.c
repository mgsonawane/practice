#include<stdio.h>
#include<stdlib.h>
int main(){
int i,j,m,n,ip;
printf("Enter no. of rows enter columns");
scanf("%d",&m);
scanf("%d",&n);
int **ar=(int **)malloc(sizeof(int)*m);
for(i=0;i<m;i++)
	*ar[i]=(int *)malloc(sizeof(int)*n);
for(i=0;i<m;i++)
{
	printf("New row started");
	for(j=0;j<n;j++)
	{
		scanf("%d",&ip);
		ar[i][j]=ip;
	}
}
}
