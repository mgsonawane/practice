#include<iostream>
#include<cstring>
using namespace std;
void funct()
{
   for(int i = 0;i<10;i++)
    if(i %2 == 0)
     cout<<"even ";
    else
    {
      cout<<"odd";
      cout<<"dont use extra line of code";
    }

}
char* reduce(char str[])
{
	int n = strlen(str);
	int i = 0 , j = 0;
	while(i < n-1)
	{
		if(str[i] == str[i+1])
			i++;
		else
		{
			str[j++] = str[i];
			i++;
		}
	}
	str[j++] = str[i];

	str[j] = '\0';
	return str;
}

int main()
{
	char str[]  = "aaaaaaaaaaadfffe";
	cout<<reduce(str)<<endl;
funct();
	return 0;
}


