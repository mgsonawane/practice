#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left;
struct node *right;
};
struct node *root=NULL;
#define nodealloc (struct node*)malloc(sizeof(struct node));
void inorder(struct node *node)
{
if(node==NULL)
        return ;
else
inorder(node->left);
printf("%d",node->data);
inorder(node->right);

}

struct node *create()
{
int x;
struct node *a;
printf("Please enter data of node");
	scanf("%d",&x);
	if(x==-1)			//base condition is data if the tree data is empty
		return NULL;
	a=nodealloc;
	a->data=x;
	a->left=NULL;
	a->right=NULL;
	printf("Enter left child of %d\n",x);
	a->left=create();

	printf("Enter right child of %d\n",x);
	a->right=create();
	
return a;



return a;
}
int main()
{
struct node *root=create();
inorder(root);
return 0;
}
