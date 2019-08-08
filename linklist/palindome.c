#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL;
struct node
{
int data;
struct node *next;
};

struct node *print(struct node *head,int n)
{
	int i;
	struct node *a=head;
	for(i=0;i<n;i++)
	{
		printf("%d",a->data);
		a=a->next;
	}
}

struct node *create(int data)
{

	
	struct node *temp,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=NULL;
if(head==NULL)
{
        head=newnode;
        temp=head;
}
else
        temp->next=newnode;
        temp=newnode;
		temp->next=newnode;
		newnode=temp;
}

int main()
{
	int i,n,m;
	printf("how many nodes??");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	scanf("%d",&m);
	create(m);
	}
	
	print(head,n);

return 0;
}
