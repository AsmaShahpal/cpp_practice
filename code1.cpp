#include<iostream>
using namespace std;
void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
int main()
{
	int v1,v2;
	cout<<"please enter the value one"<<endl;
	cin>>v1;
	cout<<"please enter the value two"<<endl;
	cin>>v2;
	add(v1 ,v2);
	sub(v1 ,v2);
	mul(v1 ,v2);
}
void add(int a, int b)
{
  cout<<"add____"<<a+b<<endl;
  
}
void sub(int a,int b)
{
	cout<<"sub____"<<a-b<<endl;
}               
void mul(int a,int b)
{ cout<<"mul____"<<a*b<<endl;
}
