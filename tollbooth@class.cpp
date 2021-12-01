#include<iostream>
using namespace std;
class tollbooth
{
   unsigned int total_car;
   double total_money;
   public:
   tollbooth()
   {
       total_car=0;
       total_money=0;
   }
   void paying_car()
   {
       total_car++;
       total_money+=50;
   }
   void nopayCar()
   {
       total_car++;
   }
   void display()
   {
       cout<<"Total number of cars is: "<<total_car<<endl;
        cout<<"Total value of money is: "<<total_money<<endl;
   }
};
int main()
{   
    int choice;
    tollbooth a1;
    int n;
    cout<<"How many choices you wnat to enter?"<<endl;
    cin>>n;
    while(n>0)
    {
    cout<<"Select your choice"<<endl;
    cout<<"1: Paying Car"<<endl;
    cout<<"2: Not a Paying Car"<<endl;
    cin>>choice;
    
    switch(choice)
    {
    case 1:
    {
    a1.paying_car();
    a1.display();
    break;
    }
    case 2:
    {
    a1.nopayCar();
    a1.display();
    break;
    }
    default:
    cout<<"Entered choice is not available!"<<endl;
    }
    };
return 0;
}
