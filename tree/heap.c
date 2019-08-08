#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
    int t=*a;
	*a=*b;
	*b=t;
}
void heap(int a[],int m,int n)
{
int large=m;
int l=(2*m)+1;
int r=(2*m)+2;

if(l < n && a[l] > a[large])
	large=l;
if(r < n && a[r] > a[large])
	large=r;
if(large != m ){
	swap(&a[m],&a[large]);
	heap(a,large,n);}
	
}

void sort(int a[],int n)
{
for(int i=(n/2)-1;i>=0;i--)
{
heap(a,i,n);
}
for(int i=n-1;i<=0;i++)
{
swap(&a[0],&a[i]);
heap(a,0,i);
}

}


int main()
{
int a[]={12,11,5,6,7,13};
int n=sizeof(a)/sizeof(a[0]);
sort(a,n);
for(int i=0;i<n;i++)
{
printf(" %d ",a[i]);
}
return 0;
}
