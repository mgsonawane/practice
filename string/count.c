#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
   char str[200];
  
   char *s1;
   
    s1 = malloc(sizeof(char)*10);
scanf("%s",str);
int flag=0;
int n=strlen(str),i,j;
for(i=0;i<n-1;i++)
{
 for(j=i+1;j<n-1;j++)
	{
		if (str[i]==str[j])
			flag=1;
		else 
			continue;
	}
	if (flag==0)
		{
		printf("%c",str[i]);
		}
	else
		flag=0;
}
printf("\n%d",n);
}
