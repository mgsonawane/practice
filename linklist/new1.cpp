#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;

};

node *reverse(node *head)
{
  node *prev = NULL;
  node *curr = head;
  while(curr)
  {
     node *next = curr->next;
     curr->next = prev;
     prev = curr;
     curr = next;
  }
 return prev; 
 
}
void display(node *head)
{
   struct node *temp=head;
   while(temp)
   {
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
}
node *removeDplicate(node *head)
{
   if(!head)
     return NULL;

   node *curr = head;
   while(curr->next)
   {
     if(curr->data == curr->next->data)
       curr->next = curr->next->next;
     else
        curr = curr->next;
   }
  return head;
}
node *newNode(int data)
{
   node *newnode = new node;
   newnode->data = data ;
   newnode->next = NULL;
  return newnode;
}
int main()
{
  //    1->1->1->2->2->2->3->3->3->4->NULL

	int i,n,dat;
//	struct node *newnode,*head=NULL,*temp;
//	scanf("%d",&n);

/*	for (i=0;i<n;i++)
	{
		scanf("%d",&dat);
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=dat;
		newnode->next=NULL;

		if(!head)
			head = temp = newnode;

		temp->next=newnode;
		temp=newnode;
	}
*/
        node *head = newNode(1);
        head->next = newNode(1);
        head->next->next = newNode(1);
        head->next->next->next = newNode(2);
        head->next->next->next->next = newNode(2);
        head->next->next->next->next->next = newNode(3);
	display(head);
//	head = reverse(head);
        head = removeDplicate(head);
        display(head);
      
	return 0;
}
