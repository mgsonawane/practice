#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};

struct node *printt(struct node *head,int n)
{
int i;
struct node *tr=head;
for(i=0;i<n;i++)
{
printf ("%d",tr->data);
tr=tr->next;
}
}

struct node *swap(struct node *head,int n,int k)
{
int i;
struct node *a=head,*b=head,*c,*last=head;
for(i=0;i<k-1;i++)
{
	a=a->next;
}
for(i=0;i<n-k;i++)
{
	b=b->next;
}
c=a->next;

for(i=0;i<n-1;i++)
{
	last=last->next;
}

a->next=NULL;
c->next=NULL;
last->next=c;
c->next=head;

printt(b,n);

//printf("%d  %d  %d %d",a->data,b->data,c->data,last->data);
}

int main()
{
int i,n,dat,k;
struct node *head=NULL,*newnode,*temp;
printf("how many nodes?");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	scanf("%d",&dat);
newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=dat;
	newnode->next=NULL;
if(head==NULL)
{
	head=newnode;
	temp=head;
}
else 
	temp->next=newnode;
	temp=newnode;

}

printf("enter k");
scanf("%d",&k);
swap(head,n,k);

return 0;
}
