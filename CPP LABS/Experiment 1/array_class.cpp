#include <iostream>
using namespace std;
class Student{
    string name;
    int rno;
    int grade;
    public:
    void read(){
        cout<<"Enter student name, roll no, grade:";
        cin>>name>>rno>>grade;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<rno<<endl;
        cout<<"Grade:"<<grade<<endl;
    }
};
int main(){
   Student s[3];
    int i;
    for(i=0;i<3;i++){
        s[i].read();
    }
    for(i=0;i<3;i++){
        s[i].display();
    }
    return 0;
}