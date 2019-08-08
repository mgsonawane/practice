#include<iostream>
using namespace std;
int cheack_prime(int n,int flag,int index){
if(flag==1 || index==n){
return flag;
}
else{
if(n%index==0){
flag=1;
return flag;
}
else{
if (index<n-1){
index=index+1;
int flag=cheack_prime(n,flag,index);
}
else{
return flag;
}
}
}

}


int main(){
int n;
cin>>n;
int p=cheack_prime(n,0,2);
if(p){
cout<<"no is prime";
}
else{
cout<<"no is not prime";
}
}
