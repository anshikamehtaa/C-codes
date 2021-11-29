#include<iostream>
using namespace std;
class student
{    
    private:
    char name[20];
    int rollno;
    int m1,m2,m3;
    public:
    void enter()
    {
        cout<<"Enter the Name"<<endl;
        cin>>name;
        cout<<"Enter the roll.no"<<endl;
        cin>>rollno;
        cout<<"Enter marks of subject 1"<<endl;
        cin>>m1;
        cout<<"Enter marks of subject 2"<<endl;
        cin>>m2;
        cout<<"Enter marks of subject 3"<<endl;
        cin>>m3;
    }
   void display()
    {   cout<<"------Student Details------"<<endl;
        cout<<"Name is: "<<name<<endl;
        cout<<"Roll number: "<<rollno<<endl;
        cout<<"Marks:"<<endl;
        cout<<"Subject 1: "<<m1<<endl;
        cout<<"Subject 2: "<<m2<<endl;
        cout<<"Subject 3: "<<m3<<endl;
    }
};
int main()
{
    student s;
    s.enter();
    s.display();
    return 0;
}
