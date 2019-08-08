#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};


int main()
{
int i,n,di;
struct node *head=NULL,*temp,*newnode;

printf("how many n");
scanf("%d",&n);

for(i=0;i<n;i++)
{

newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=di;
newnode->next=NULL;

if(head==NULL)
{
head=newnode;
temp=head;
}
temp->next=newnode;
newnode=temp;
}

return 0;
}
