#include <iostream>
using namespace std;
class test{
    int value;
    
    public:
    test()
    {
        value=20;
    }
    test(int x)
    {
        value=x;
    }
    void display()
    {
        cout<<"Value is "<<value<<endl;
    }
    void operator ++()
    {
      ++value;
    }
    void operator ++(int)
    {
        value++;
    }
    void operator --()
    {
      --value;
    }
    void operator --(int)
    {
        value--;
    }
};
int main()
{
    test a1,a4;
    ++a1;
    a1.display();
    a1++;
    a1.display();
    a4--;
    a4.display();
    --a4;
    a4.display();
    
return 0;
}

