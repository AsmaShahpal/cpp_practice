#include<iostream>
using namespace std;
int main()
{
	int num,bineryNum,rem,j,quot,decnum=0,i=1;
	int octnum[50];
	cout<<"\n input a binery number:";
	cin>>bineryNum;
	num=bineryNum;
	while(bineryNum>0)
	{
		rem=bineryNum%10;
		decnum=decnum+rem*i;
		i=i*2;
		bineryNum=bineryNum/10;
		
	}
	i=1;
	quot=decnum;
	while(quot>0)
	{
		octnum[i++]=quot%8;
		quot=quot/8;
		quot=quot/8;
		
	}
	cout<<"The equivalent octal valueof"<<num<<"is:";
	for(j=1;j>0;j--)
	{
		cout<<octnum[j];
		
	}
	cout<<"\n";
	


}
 
//coded by asma shahpal
