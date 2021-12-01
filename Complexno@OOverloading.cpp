#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    Complex(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<'+'<<b<<'i'<<endl;
    }
    friend Complex operator +(Complex o1,Complex o2);
};
Complex operator +(Complex o1,Complex o2)
{  
   return Complex(o1.a+o2.a,o1.b+o2.b);
}
int main()
{
    Complex a1(5,10),a2(15,20);
    a1.display();
    a2.display();
    Complex a3=a1+a2;
    cout<<"----After addition----"<<endl;
    a3.display();
    return 0;
}