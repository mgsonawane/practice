#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};


int main()
{
	int n,i,data;
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
tr=head;
for(i=0;i<n;i++)
{
printf ("%d -> ",tr->data);
tr=tr->next;
}
printf("\n");
tr=head;
for(i=0;i<n;i++)
{
printf("%p ->",tr);
tr=tr->next;
}
printf("\n");
return 0;
}
