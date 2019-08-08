#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;
}node;

node *create(node *root)
{

struct node *create()
{
int x;
struct node *a;
printf("Please enter data of node");
        scanf("%d",&x);
        if(x==-1)                       //base condition is data if the tree data is empty
                return NULL;
        a=(node*)malloc(sizeof(node));
        a->data=x;
        a->left=NULL;
        a->right=NULL;
        printf("Enter left child of %d\n",x);
        a->left=create();

        printf("Enter right child of %d\n",x);
        a->right=create();

return a;

}

void main()
{
node *root=create();
}
