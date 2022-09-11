#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i=0,j,temp;
    char hex[100];
    cout<<"Enter Decimal No.:";
    cin>>n;
    while(n!=0)
    {
    	temp=n%16;
    	if(temp<10)
    	hex[i]=temp+48;
    	else
    	hex[i]=temp+55;
    	i++;
    	n=n/16;
    	
	}
	cout<<"Hexadecimal:";
	for(j=i-1; i>=0;i--)
	cout<<hex[j];

}
//coded by asma shahpal
