//Constructors in Inheritance
//Parameterized constructor for child class
#include<iostream>
using namespace std;
class A
{   
    int a;
    public:
    A()
    {   
        cout<<"This is the output for class A "<<a<<endl;
    }
};
class B:public A
{   
    int b,c; 
    public:
   
    B(int x,int y)//Value is passes from constructor B to A
    {  
        b=x;
        c=y;
       cout<<"This is output for B "<<b<<endl; 
       cout<<"This is output for C "<<c<<endl; 
    }
};
int main()
{
    B obj(10,20);
}