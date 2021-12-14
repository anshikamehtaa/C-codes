#include<iostream>
using namespace std;
class Numbers{
    public:
    int number;

    Numbers(int n){
        number = n;
    }

    int operator <<(Numbers obj){
        return number << obj.number;
    }

    int operator >>(Numbers obj){
        return number >> obj.number;
    }
};
int main(){
    
    int num,shift;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"\nEnter Shift value: ";
    cin>>shift;

    Numbers a(num);
    Numbers b(shift);

    int newNum1, newNum2;
    newNum1 = a << b;
    newNum2 = a >> b;

    cout<<"Left Shift: "<<newNum1<<endl;
    cout<<"Right Shift: "<<newNum2<<endl;

}    
