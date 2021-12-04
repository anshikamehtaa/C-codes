//Constructors in Multiple Inheritance
//Parameterized constructor for child class
#include<iostream>
using namespace std;
class A
{   
    int a;
    public:
    A(int y)
    {  
        a=y;
        cout<<"For parent class "<<a<<endl;
    }
};
class B
{   
    int b;
    public:
    B(int z)
    {   
        b=z;
        cout<<"For another parent class "<<b<<endl;
    }
};
class C:public A,public B
{   
    int c;
    public:
    C(int x,int y,int z):A(y),B(z)
    {
        c=x;
       cout<<"Destructor for child class "<<c<<endl; 
    }
};
int main()
{
    C obj(10,20,30);
    
}