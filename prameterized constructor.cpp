#include <iostream>

using namespace std;

/*class calculator{
    public:
    int add(int a,int b)
    {
        return(a+b);
    }
    int sumrealComplex(complex ,complex);
};*/
class complex{
    int a,b;
    public:
    
    void setNumber(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void printNumber()
    {
        cout<<"Number is"<<a<<"+"<<b<<"i"<<endl;
    }
    complex(int,int);
};
complex::complex(int x,int y)
{
    a=x;
    b=y;
}
/*int calculator::sumrealComplex(complex c1,complex c2)
{
    return (c1.a+c2.a);
}*/
int main()
{
    
    
    complex c4(5,7);
    c4.printNumber();
    
     /*calculator calc;
      res=calc.sumrealComplex(c1,c2);
      cout << "The sum of real part of o1 and o2 is " << res << endl;*/

    return 0;
}
