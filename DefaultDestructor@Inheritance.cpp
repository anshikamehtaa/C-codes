//Constructors in Inheritance
//Parameterized constructor for child class
#include<iostream>
using namespace std;
class A
{   
    public:
    ~A()
    {
        cout<<"Destructor for parent class"<<endl;
    }
};
class B:public A
{   
    public:
    ~B()//A() default destructor for parent class is called
    {
       cout<<"Destructor for child class"<<endl; 
    }
};
int main()
{
    B obj;
}