#include<stdio.h>
int main(int argc, char *argv[])
{
 printf ("You have enteredddd::: %d \n",argc);
int i,n;
n=argc;
 for (i=1;i<n;++i)
	{
	 printf("%s\n",argv[i]);
	}
return 0;
}
