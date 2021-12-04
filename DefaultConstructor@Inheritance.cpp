//Constructors in Inheritance
#include<iostream>
using namespace std;
class A
{   
    public:
    A()
    {
        cout<<"This is the output for class A"<<endl;
    }
};
class B:public A
{   
    public:
    B()//A() default constructor for parent class is called
    {
       cout<<"This is output for B"<<endl; 
    }
};
int main()
{
    B obj;
}