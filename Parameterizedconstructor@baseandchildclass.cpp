//Constructors in Inheritance
//parameterized constructor for B and A
#include<iostream>
using namespace std;
class A
{   
    int a;
    public:
    
    A(int y)
    {   
        a=y;
        cout<<"This is the output for class A "<<a<<endl;
    }
};
class B:public A
{   
    int b,c; 
    public:
   B(int x,int y):A(y)//Value is passed from constructor B to A
    {  
        b=x;
       cout<<"This is output for B "<<b<<endl; 
    }
    
};
int main()
{
    B obj(10,20);
}
