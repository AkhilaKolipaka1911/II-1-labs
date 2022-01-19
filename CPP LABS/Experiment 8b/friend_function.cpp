#include <iostream>
using namespace std;
class Box{
	private:
	int length;
	public:
	Box(){
		length = 0;
	}
	private:
	friend int PrintLength(Box);
};
	int PrintLength(Box b){
		b.length += 10;
		return b.length;
	}
	
	int main(){
		Box b1;
		cout<<"Length of Box:"<<PrintLength(b1);
		
		return 0;
	}