#include<stdio.h>

int main()
{
int var=10;
int *ptr1=&var;
*ptr1=20;
int a=20;
int *ptr2=a;
int **ptr2=&ptr1;
**ptr2=30;

printf("%d",var);
return 0;
}
