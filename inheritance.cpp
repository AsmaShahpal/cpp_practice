#include<iostream>
using namespace std;
class animal
{
private:// base class
		void eat()
		{
			cout<<"######################"<<endl;
			cout<<"I can eat!"<<"*******"<<endl;
		}
    	void sleep()
	{
		cout<<"I can sleep!"<<"*******"<<endl;
	}
	        	

};
class Dog : public animal
{
	public:
		void bark()
		{
			cout<<"I can bark!woof woof!!"<<"*******"<<endl;
			
		}
};
int main()
{
	Dog dog1;// creat object of the dog class
	
	dog1.sleep();
	dog1.bark();
	return 0;
}

//coded by asma shahpal
