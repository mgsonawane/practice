#include<stdio.h>
#include<stdio.h>

struct node
{
int data;
struct node *left;
struct node *right;
};
struct *create(struct *node )
{
node=(struct node*)malloc(sizeof(struct node));



}

struct node *create(int n)
{
  struct node *newnode=(struct node*)malloc (sizeof(struct node));
node->data=n;
node->left=NULL;
node->right=NULL;
}



int main()
{
struct node *root=create(5);
root->left=create(4);
root->right=create(3);
root->left->left=create(2);
root->left->right=create(1);
return 0;
}
