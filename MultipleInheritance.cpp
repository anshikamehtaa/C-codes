#include<iostream>
using namespace std;
class A
{
    public:
    string name;
    int sub1;
    int sub2;
    
    void enter_details()
    {
        cout<<"Enter the first name"<<endl;
        cin>>name;
        cout<<"Enter marks in subject 1"<<endl;
        cin>>sub1;
        cout<<"Enter marks in subject 2"<<endl;
        cin>>sub2;
    }
    
};
class B 
{
    public:
    int sub3;
    int sub4;
    
    void input_data()
    {
        cout<<"Enter marks of subject 3"<<endl;
        cin>>sub3;
        cout<<"Enter marks of subject 4"<<endl;
        cin>>sub4;
    }
};
class C:public A,public B 
{
    public:
    void display()
    {
        cout<<"Name is: "<<name<<endl;
        cout<<"Subject 1: "<<sub1<<endl;
        cout<<"Subject 2: "<<sub2<<endl;
        cout<<"Subject 3: "<<sub3<<endl;
        cout<<"Subject 4: "<<sub4<<endl;
    }
};
int main()
{
    //Making an object od class C 
    //Both classes A and B are inherited in C
    C obj1;
    obj1.enter_details();
    obj1.input_data();
    obj1.display();
}