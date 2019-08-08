#include<stdio.h>
#include<stdlib.h>

struct node
{
char data;
struct node *next;
};

struct node *printt(struct node *head)
{
struct node *tr=head;
while(tr != NULL)
{
printf ("%c",tr->data);
tr=tr->next;
}
}


void main()
{
int choice;
struct node *head=NULL,*temp;

while(1)
{
	printf("1)Enter char ");
	printf("2)Display");
	printf("3)Exit");
	
	printf("Enter choice");
	scanf("%d",&choice);
	
       switch(choice)
	{
	case 1:
		{
		printf("enter input");
		struct node *newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%s",&newnode->data);
		newnode->next=NULL;
			if(head==NULL)
			{	
				head=newnode;
				temp=head;

			}
		else
			{
			temp->next=newnode;
			temp=newnode;
			}
		break;
		}
		
	case 2: 
		{
		printt(head);
		break;
		}
	case 3 :exit(0);
	}
}


}
