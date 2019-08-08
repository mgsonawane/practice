#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};

int main()
{
 struct node* head=NULL;
 struct node* f=NULL;
 struct node* s=NULL;
 struct node* t=NULL;

 head=(struct node*)malloc(sizeof(struct node));
 f=(struct node*)malloc(sizeof(struct node));
 s=(struct node*)malloc(sizeof(struct node));
 t=(struct node*)malloc(sizeof(struct node));

 head->data=1;
 head->next=f;

 f->data=2;
 f->next=s;
 f->next=t;

 t->data=5;
 t->next=s;
	
 s->data=3;
 s->next=NULL;
 struct node* a=head;
 while(a!=NULL)
 {
  printf("%d",a->data);
  a=a->next;
 }
	
return 0;

}
