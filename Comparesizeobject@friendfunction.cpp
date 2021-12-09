#include<iostream>
using namespace std;
class test2;
class test1
{
    long int salary;
    int num;
    public:
    test1()
    {
        salary=100000;
        num=100;
    }
    test1(int x)
    {
        salary=100000;
        num=x;
    }
    friend void compare(test1,test2);
};

class test2
{
    int salary;
    int num1,num2;
    public:
    test2()
    {
       salary=5000;
        num1=50;
        num2=100;
    }
    test2(int x,int y)
    {
        salary=5000;
        num1=x;
        num2=y;
    }
    friend void compare(test1 ,test2);
};

void compare(test1 obj1,test2 obj2)
{
    cout<<"Size of object 1 is "<<sizeof(obj1)<<endl;
    cout<<"Size of object 2 is "<<sizeof(obj2)<<endl;
    if(sizeof(obj1)>sizeof(obj2))
    {
        cout<<"Size of objects 1 is more that is: "<<sizeof(obj1)<<endl;
    }
    else if(sizeof(obj1)<sizeof(obj2))
    {
        cout<<"Size of objects 2 is more that is "<<sizeof(obj2)<<endl;
    }
    else
    {
        cout<<"Sizes of objects are same"<<endl;
    }
}
int main()
{
    test1 a;
    test2 b;
    compare(a,b);
}