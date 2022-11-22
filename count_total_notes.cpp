#include <iostream>
using namespace std;


int main()
{
    int amount;
    int note2000=0,note500=0,note100=0,note50=0,note20=0,note10=0,note5=0,note2=0,note1=0;
    cout<<"Enter the amount to check"<<" "<<endl;
    cin>>amount;
    
    if(amount>=2000)
    {
        note2000=amount/2000;
        amount-=note2000*2000;
    }
    if(amount>=500)
    {
        note500=amount/500;
        amount-=note500*500;
    }
    if(amount>=100)
    {
        note100=amount/100;
        amount-=note100*100;
    }
    if(amount>=50)
    {
        note50=amount/50;
        amount-=note50*50;
    }
    if(amount>=20)
    {
        note20=amount/20;
        amount-=note20*20;
    }
    if(amount>=10)
    {
        note10=amount/10;
        amount-=note10*10;
    }
    if(amount>=5)
    {
        note5=amount/5;
        amount-=note5*5;
    }
    if(amount>=2)
    {
        note2=amount/2;
        amount-=note2*2;
    }
    if(amount>=1)
    {
        note1=amount/1;
        amount-=note1*1;
    }

cout<<"Total number of each note are "<<" "<<endl;
cout<<"Rupees 2000: "<<note2000<<endl;
cout<<"Rupees 500: "<<note500<<endl;
cout<<"Rupees 100: "<<note100<<endl;
cout<<"Rupees 50: "<<note50<<endl;
cout<<"Rupees 20: "<<note20<<endl;
cout<<"Rupees 10: "<<note10<<endl;
cout<<"Rupees 5: "<<note5<<endl;
cout<<"Rupees 2: "<<note2<<endl;
cout<<"Rupees 1: "<<note1<<endl;
    return 0;
}
