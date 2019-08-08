#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
char data;
struct node *next;
};

struct node *printt(struct node *head)
{
struct node *tr=head;
while(tr->next!=NULL)
{
printf ("data:%c",tr->data);
tr=tr->next;
}
}


void main()
{
int choice;
struct node *head=NULL,*temp;
char ch;
while(1)
{
	printf("enter choice");
	scanf("%d",&choice);
       switch(choice)
	{
	case 1:
		printf("enter input\n");
		scanf("%s",&ch);
		struct node *newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=ch;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			temp=head;
		}
		else
		{
		temp->next=newnode;
		temp=temp->next;
		}		
		break;

	case 2: printt(head);
		break;

	case 3 :exit(0);
		break;
	}
}


}
