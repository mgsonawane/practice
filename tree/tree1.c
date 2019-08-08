#include<stdio.h>
#include<stdlib.h>

struct node
{int data; 
struct node *left; 
struct node *right ;
};
int hght(struct node *node)
{
if(node==NULL)
        return 0;
else
{
int lhght=hght(node->left);
int rhght=hght(node->right);
if(lhght<rhght)
	return (rhght+1);
else
	return (lhght+1);
}

return 0;
}
/*
void nihal(struct node *node)
{
if(node==NULL)
	return;
if(node->left=node->right==NULL || node->left=node->right
	printf("%d",node->data);

nihal(node->left)
nihal(node->right)
}
*/
void postorder(struct node *node)
{
if(node==NULL)
	return ;
else
postorder(node->left);
postorder(node->right);
printf("%d",node->data);
}
void preorder(struct node *node)
{
if(node==NULL)
	return ;
else
printf("%d",node->data);
preorder(node->left);
preorder(node->right);

}


void inorder(struct node *node)
{
if(node==NULL)
	return ;
else
inorder(node->left);
printf("%d",node->data);
inorder(node->right);

}

struct node *create(int n)
{
struct node *node=(struct node*)malloc(sizeof(struct node));
node->data=n;
node->left=NULL;
node->right=NULL;
}

int main()
{
int h;
struct node *a;
struct node *root=create(1);
root->left=create(2);
root->right=create(3);
root->left->left=create(4);
root->left->right=create(5);
a=root;
printf("inorder::");
inorder(a);
a=root;
printf("\npreorder::");
preorder(a);
a=root;
printf("\npostorder::");
postorder(a);
printf("height::");
h=hght(a);
printf("%d",h);
return 0;

}
