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

int main()
{
int i,n,dat,k;
struct node *head=NULL,*newnode,*temp;
printf("how many nodes?");
scanf("%d",&n);
while(1)
{

 switch(ch)
 {
	case 1:
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
 }
}
printt(head,n);

return 0;
}
