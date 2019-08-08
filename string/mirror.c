#include<stdio.h>
#include<stdlib.h>

void main()
{
int i,n;
char str[]="(aa)";
char alpha;
n=sizeof(str)-1;
for(i=0;i<n;i++)
{
  alpha=str[i];
//printf("%c",str[i]);

if(str[i]=='(')
    printf("-1");
else	if(alpha==')')
	printf("0");
	
else
	printf("%c",alpha);

}
//printf("%s\n",str);
//printf("%d\n",n);

}
