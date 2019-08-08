#include<stdio.h>
#include<stdlib.h>
void main()
{
char str[100];
int i=0;
printf("Enter string");
scanf("%s",&str);

str[0]='m';
while (str[i] !='\0'){
printf("%c",str[i]);
i++;
}
}
