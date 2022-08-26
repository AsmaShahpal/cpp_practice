#include<iostream>
using namespace std;
struct Area
{
	int length;
	int width;
};
int main()
{
	Area roomOne , roomTwo;
	roomOne.length=13;
	roomOne.width=10;
	
	roomTwo.length=16;
	roomTwo.width =20;
	cout<<roomOne.length*roomOne.width;
}
