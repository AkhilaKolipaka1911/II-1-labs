#include<iostream>
#include<exception>
using namespace std;
int main(){
	float var1,var2;
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
	catch(int i){
		cout<<"Caught exception : int type"<<endl;
	}
	catch(float f){
		cout<<"Caught exception : float type"<<endl;
	}
	catch(char c){
		cout<<"Caught exception : char type"<<endl;
	}
	catch(...){
		cout<<"Caught exception"<<endl;
	}
	return 0;
}