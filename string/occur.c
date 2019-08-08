#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char main()
{
int i=0,j=0,count=0;
char *str;
printf("Enter the string");
scanf("%m[^\n]",&str);
int m=strlen(str);

while( str[i] != '\0')
{
i++;
}

printf("\n%d",i);
}
