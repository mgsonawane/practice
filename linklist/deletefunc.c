#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};
struct node *printt(struct node *head)
{
struct node *a=head,*b=head;
do
{
printf("%d ",a->data);
a=a->next;
}while(a->next!=NULL);
printf("\n");

}
struct node *delete(struct node *head,int k)
{
 int i;
 struct node *a=head,*b=head;

 for(i=0;i<k-1;i++)
 {
 	a=a->next;
	b=b->next;
 }
 b=b->next;
 while(a->next!=NULL)
 {
 a->data=b->data;
 a=a->next;
 b=b->next;
 }
printt(head);
}

int main()
{
        int n,i,data,k;
struct node *newnode,*temp,*head=NULL,*tr;
printf("how nodey nodes");
scanf("%d",&n);
for(i=0;i<n;i++)
{

 newnode=(struct node*)malloc(sizeof(struct node));
scanf("%d",&data);
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
}
printf("which kth node u want to delete??");
scanf("%d",&k);
delete(head,k);
return 0;
}

