#include<stdio.h>
#include<stdlib.h>
void main()
{
char name[100],i=0;
printf("Enter name");
scanf("%s",name);
while(name[i] != '\0')
{
i++;
}
		//int size=sizeof(name)/sizeof(name[0]);
printf("  %d  ",i);


//	printf("  %c  ",name[i]);

}
