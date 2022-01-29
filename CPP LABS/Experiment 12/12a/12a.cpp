#include <iostream>
using namespace std;
class Add{
	public:
	int add(int a,int b){
		return a + b;
	}
	int add(int a,int b,int c){
		return a + b + c;
	}
};
int main(){
	Add a;
	cout<<"Sum of 5,7 is:"<<a.add(5,7)<<endl;
	cout<<"Sum of 4,2,15 is:"<<a.add(4,2,15)<<endl;
	
	return 0;
}