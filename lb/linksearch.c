#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *next;
struct node *prev;
}node;
node *head=NULL;

void *search()
{
int count=0,k,no=-1;
printf("Enter k");
scanf("%d",&k);

while(head != NULL)
{
count++;
if (head->data == k)
	{
	//	printf("\n output is :: %d\n",count);
	no=count;
	}
//else if(head == NULL)
//	 break;
else
	head=head->next;
	
}
printf("%d",no);
}
node *create()
{
		int n,i;
		node *temp;
		printf("how many nodes??\n");
		scanf("%d",&n);
                printf("Enter the nodes\n") ;
		for (i=0;i<n;i++)
		{
                node *newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
                newnode->next=NULL;
                newnode->prev=NULL;
                if(head==NULL)
                {
                 head=newnode;
                 temp=head;
                }
                else
                        temp->next=newnode;
                        newnode->prev=temp;
                        temp=newnode;
		}
}
int main()
{
create();
search();

}
