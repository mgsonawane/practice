#include<stdio.h>
#include<stdlib.h>

int path(int j,int **ar,int cnt)
{
int ab=0;
for(i=0 ; i < n ; i++ )
{
  if(a[j][i]==1)
	{
		if(i==3)
			return count;
		else
			path(j,*arr,cnt+1)

	}

}


int main(){
int i,j,m,n,ip;
printf("Enter no. of rows enter columns");
scanf("%d",&m);
scanf("%d",&n);
int arr[n];
int **ar=(int **)malloc(sizeof(int)*m);
for(i=0;i<m;i++)
        ar[i]=(int *)malloc(sizeof(int)*n);
for(i=0;i<m;i++)
{
        printf("New row started");
        for(j=0;j<n;j++)
        {
                scanf("%d",&ip);
                ar[i][j]=ip;
        }
}
int a=0;
for(i=0;i<m;i++)
{
        for(j=0;j<n;j++)
        {
          if(a[i][j]==1)
		{
			arr[a]=path(j,ar,cnt)
			a++;
		}
        }
        printf("\n");
}

return 0;
}

