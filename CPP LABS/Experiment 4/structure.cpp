#include<iostream>
using namespace std;
#include<string.h>
struct Person{
    string name;
    int age;
};
int main(){
    struct Person p;
    cout<<"Enter person's name,age:";
    cin>>p.name>>p.age;
    cout<<"Name:"<<p.name<<endl;
    cout<<"Age:"<<p.age<<endl;
    return 0;
}