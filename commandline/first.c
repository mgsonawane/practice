#include<stdio.h> 
int main(int argc,char *argv[])
{
printf("prohram name is %s",argv[0]);
if ( argc > 2 ){ printf("too many arguments");}
else{printf("one argument expected"); }
return 0;
}
