//Diamond problem 
//Virtual class is created to avoid error that is caused by deriving a class more than once by the child's child
#include<iostream>
using namespace std;
class A
{   
    public:
    void func1()
    {
        cout<<"This is class A"<<endl;
    }
};
class B:public virtual A
{   
    public:
    void func2()
    {
        cout<<"This is class B"<<endl;
    } 
};
class C:public virtual A
{   
    public:
     void func3()
    {
        cout<<"This is class C"<<endl;
    } 
};
class D:public B,public C
{   
    public:
     void func4()
    {
        cout<<"This is class D"<<endl;
    } 
};
int main()
{
    D obj;
    obj.func1();
    obj.func2();
    obj.func3();
    obj.func4();
}