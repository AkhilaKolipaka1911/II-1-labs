#include<iostream>
#include<exception>
using namespace std;
int main(){
	int var1,var2;
	float var3;
	cout<<"Enter the numerator:";
	cin>>var1;
	cout<<"Enter the denominator:";
	cin>>var2;
	try{
		if(var2!=0){
		var3 = var1/var2;
		cout<<"Result is :"<<var3<<endl;
		}
		else{
		throw(var2);
		}
	}
	catch(int a){
	cout<<"Divide by zero exception occured"<<endl;
	}
	return 0;
}