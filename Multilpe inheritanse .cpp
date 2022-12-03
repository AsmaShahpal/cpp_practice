#include<iostream>
using namespace std;
class Employee
{
public : 
  Employee()
  {
  	cout<<"Employee' s constructor called"<<endl;}
  };
class Manager
{
	public:
		Manager()
		{
		 	cout<<"Manager' s constructor called"<<endl;}	
		};
		class Programmer: public Manager, public Employee// Note the order 
		{
			public:
				Programmer()
			{
					cout<<"Programmer's constructor called"<<endl;}
		};
		int main()
		{
			Programmer p;
			
		}
		//coded by asma shahpal
