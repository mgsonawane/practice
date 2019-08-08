#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,top=-1,el=0,n;
int choice;
printf("enter stack ");
scanf("%d",&n);
int *ar=(int*)malloc(sizeof(int)*n);

while(1)
{
printf("\nEnter choice");
scanf("%d",&choice);
printf("1)  push");
printf("2)  pop");
printf("3)  isempty");
printf("4)  isfull");
printf("5)  Display");
printf("6)  Exit");
 switch(choice)
 {
	case 1:{
		if(top>=n-1)
		{
		 printf("stack is full");
		}
		else
		top++;
		printf("enter element");
		scanf("%d",&el);
		ar[top]=el;
		break;
		}
	case 2:{
		if(top<0)
		{
			printf("Stack is already emptied");
		}
		else
			top--;
		}
		break;
	case 3:
		{
		if(top>0)
		{
			printf("stack is empty");
		}
		else
			printf("stack is not empty");
		}
		break;
	case 4:{
		if(top==n)
		{
			printf("stack is full");
		}
		else
			printf("stack is not full");
		}
		break;	
	case 5:
		{
		for (j=top;j>=0;j--)
		{
			printf("\n%d",ar[j]);
		}
		}
		break;
	case 6:
		exit(0);
		
 }
}

return 0;
}

