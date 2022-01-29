#include <fstream>
#include <iostream>
using namespace std;
int main ()
{
  	char data[60];
  	ofstream os;
  	os.open("student.txt");
	cout << "Writing to the file" << endl;
  	cout << "Enter your name: "; 
  	cin.getline(data, 60);
	os << data << endl;
	cout << "Enter your age: "; 
  	cin >> data;
  	os << data << endl;
	os.close();
	ifstream is;
	string line;
  	is.open("student.txt"); 
 	cout << "Reading from the file" << endl; 
  	while(getline(is,line)){
  	  cout<<line<<endl;
  	}
	is.close();
 return 0;
}