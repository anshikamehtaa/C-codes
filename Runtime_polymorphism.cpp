#include <iostream>
using namespace std;
class Base
{
public:
 int var1 = 10;
 virtual void display()
 {
 cout << "Inside Base class" << endl;
 cout << "Displaying Var1 : " << var1;
 }
};
class Derived : public Base
{
public:
 int var2 = 20;
 void display()
 {
 cout << "Inside Derived class" << endl;
 cout << "Displaying Var1 : " << var1 << endl;
 cout << "Displaying Var2 : " << var2 << endl;
 }
};
int main()
{
 
 Base *ptr1;
 Derived obj;
 ptr1 = &obj;
 ptr1->display();
}