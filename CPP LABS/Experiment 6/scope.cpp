#include <iostream>
#include <string.h>
using namespace std;

class A1{
	public:
		int a1;
		A1(){
			a1 = 10;
		}
		void display(){
			cout<<a1<<endl;
		}
};

class A2{
	public:
		int a2;
		A2(){
			a2 = 20;
		}
		void display(){
			cout<<a2<<endl;
		}
};

class A3 : public A1,public A2{
	public:
		int a3;
		A3(){
			a3 = 30;
		}
		void display3(){
			cout<<a3<<endl;
			A1 :: display();
			A2 :: display();
		}
		void max();
};

void A3 :: max(){
	if((a1>a2) && (a1>a3)){
		cout<<a1<<endl;
	}
	else if((a2>a1) && (a2>a3)){
		cout<<a2<<endl;
	}
	else{
		cout<<a3<<endl;
	}
}
int i = 100;

int main(){
	int i = 200;
	A3 obj;
	obj.display3();
	obj.max();
	cout<<"Value of i:"<<i<<endl;
	cout<<"Value of i using scope resolution operator:"<<::i<<endl;
	return 0;

}