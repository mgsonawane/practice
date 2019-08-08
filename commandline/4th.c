#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
 printf ("You have enteredddd::: %d \n",argc);
int i,n,m,j;
char mm[200];
n=argc;
 for (i=1;i<n;++i)
	{
	 printf("%s\n",argv[i]);
	m=strlen(argv[i]);
	strcpy(mm,argv[i]);
	for(j=m-1;j<1;j++)
	 {
	 	printf("%c\n",mm[j]);
	 }
	}
return 0;
}
