#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *node;
};


int main()
{
int i,n,d;
struct node *head==NULL,*temp;
printf("how many  nodes u want to insert");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 struct newnode=(struct node *)malloc(sizeof(struct node));
scanf("%d",&d);
newnode->data=d;
newnode->next==NULL;
if(head==NULL)
{
head=newnode;
temp=head;
}
temp->next=newnode;
temp=newnode;

}


return 0;
}
