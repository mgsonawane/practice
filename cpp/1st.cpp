#include<iostream>

using namespace std;

int main(int argc , char** argv)
{
	int i,n;
   cout << "You have entered " << argc 
	<< "arguments are::";

	for (i=0;i<n;++i)
	{
	 cout<< argv[i] << "\n" ;
	}
return 0;
}
