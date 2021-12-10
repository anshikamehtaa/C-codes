#include<iostream>
using namespace std;
class Employee
{
    string name;
    int age;
    string Ecode;
    public:
    void Enter_details(string x,int y,string z)
    {
        name=x;
        age=y;
        Ecode=z;
    }
    int operator -(Employee obj1)
    {
       return(age-obj1.age); 
    }
    
};
int main()
{
    cout<<"ANSHIKA MEHTA,Univ Roll.no-2018188,Section-G"<<endl;
    Employee o1,o2;
    o1.Enter_details("Anshika",20,"F001");
    o2.Enter_details("Karan",33,"F002");
    
    int o3=o1-o2;
    cout<<"Value of age gap is  "<<o3<<endl;
    
    
}