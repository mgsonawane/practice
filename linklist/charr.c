#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL;
struct node
{
 int data;
 struct node *next;
};
void *create(int nn)
{
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  struct node *temp;
        newnode->data=nn;
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

int main()
{
  int i,n;
  int nn;
  printf("How many no");
  scanf("%d",&n);
printf("Enter the nos");
for(i=0;i<n;i++)
{
scanf("%d",&nn);
create(nn);
}
return 0;
}
