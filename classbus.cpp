#include<iostream>
using namespace std;
class Bus
{
    int Busno;
    char from[20];
    char to[20];
    int distance,fare;
    char type;
    
    public:
    Bus()
    {
        type='o';
        fare=500;
    }
    ~Bus()
    {
        cout<<"The object is destroyed"<<endl;
    }
    void calcfare(char type,int distance)
    {
        if(type=='o'||'O')
        cout<<"Fare is "<<15*distance<<endl;
        else if(type=='e'||'E')
        cout<<"Fare is "<<20*distance<<endl;
        else if(type=='i'||'I')
        cout<<"Fare is "<<24*distance<<endl;
        else
        cout<<"Entered choice is not available!!"<<endl;
    }
    void allocate()
    {
        cout<<"Enter the Bus number"<<endl;
        cin>>Busno;
        cout<<"Enter the picking spot"<<endl;
        cin>>from;
        cout<<"Enter the destination spot"<<endl;
        cin>>to;
        cout<<"Enter the Bus type"<<endl;
        cin>>type;
        cout<<"Enter the Distance"<<endl;
        cin>>distance;
        
        calcfare(type,distance);
    }
    void show()
    {   
        cout<<endl;
        cout<<"Entered details are: "<<endl;
        cout<<"Journey begins from: "<<from<<endl;
        cout<<"Journey ends at: "<<to<<endl;
        cout<<"Bus Type: "<<type<<endl;
        cout<<"Total Distance: "<<distance<<endl;
    }
};
int main()
{   
    cout<<"Welcome to our webpage!!"<<endl;
    cout<<"Bus menu is as follows"<<endl;
    cout<<"1: Type O,Price/km=15"<<endl;
    cout<<"2: Type E,Price/km=20"<<endl;
    cout<<"3: Type I,Price/km=24"<<endl;
    Bus a1;
    
    a1.allocate();
    a1.show();
return 0;
}

