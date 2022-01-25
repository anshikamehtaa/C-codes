#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    float result=a/b;
    try
    {
        if(b!=0)
        {
            cout<<"Result is "<<result<<endl;
        }
        else
        {
            throw(b);
        }
    }
    catch(float i)
    {
        cout<<"Do not enter zero as diviser that is B"<<endl;
    }
    cout<<"Thankyou for using our program!!"<<endl;
    return 0;
}