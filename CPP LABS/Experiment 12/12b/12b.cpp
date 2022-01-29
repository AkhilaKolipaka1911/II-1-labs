#include<iostream>
using namespace std;
class Base
{
public:
	void show() {
	cout<<"Base Class\n";
	}
};
	
class Derived: public Base
{
public:
	void show() {
	cout<<"Derived Class\n";
	}
};
	
int main()
{
	Base *bp = new Derived;
	bp->show();

	return 0;
}