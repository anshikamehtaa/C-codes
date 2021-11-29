#include <iostream>

using namespace std;

namespace info
{
    char name[20];
    int age;
    void add()
    {
        cout<<"Enter the name:"<<endl;
        cin>>name;
        cout<<"Enter the age:"<<endl;
        cin>>age;
    }
    void display()
    {
        cout<<"Entered name is:"<<name<<endl;
        cout<<"Entered age is:"<<age<<endl;
    }
}
namespace value
{
    char name[20];
    int age;
    void display()
    {
        cout<<"Entered name is:"<<name<<endl;
        cout<<"Entered age is:"<<age<<endl;
    }
    void add()
    {
        cout<<"Enter the name:"<<endl;
        cin>>name;
        cout<<"Enter the age:"<<endl;
        cin>>age;
    }
    
}
int main()
{
    cout<<"------For first namespace------"<<endl;
    info::add();
    info::display();
    
    cout<<"------For second namespace------"<<endl;
    value::add();
    value::display();
  return 0;  
}
