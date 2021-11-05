#include<iostream>
using namespace std;
int count=0;
class num{
    public:
    num()
    {
        count++;
        cout<<"Time constructor is called for object number"<<count<<endl;
    }
    ~num()
    {
        cout<<"Destructor is called for object number"<<count<<endl;
        count--;
    }
};
int main()
{
    cout<<"We are inside main function"<<endl;
    num n1;
    {
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    return 0;
}