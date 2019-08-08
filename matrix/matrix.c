#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[100][100],m,n,i,j;
printf("Enter m and n");
scanf("%d %d",&m,&n);

for(i=0 ; i<m ;i++)
{
for(j=0 ; j<n ;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0 ; i<n ;i++)
{
for(j=0 ; j<n ;j++)
{
printf(" %d ",a[i][j]);
}
printf("\n");
}


return 0;

}
