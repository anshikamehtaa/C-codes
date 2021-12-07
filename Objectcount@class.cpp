#include<iostream>
using namespace std;
class test 
{
    static int count;
    public:
    test()
    {   
        count++;
    }
    static void display()
    {   
        cout<<"Total number of objects created are "<<count;
    }
};
int test::count;
int main()
{
    test obj;
    test obj1;
    test obj3;
    obj.display();
}