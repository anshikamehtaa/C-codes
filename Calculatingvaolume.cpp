#include<iostream>
using namespace std;
class Volume
{
    private:
    float side,r,h,len,br,hgt;
    public:
    float result;
    Volume(float x)
    {
       side=x; 
       result=side*side*side;
       cout<<"Volume of cube is "<<result<<endl;
    }
    Volume(float y1,float y2)
    {
       r=y1;
       h=y2;
       result=3.14*r*r*h;
       cout<<"Volume of cylinder is "<<result<<endl;
    }
    Volume(float z1,float z2,float z3)
    {
       len=z1;
       br=z2;
       hgt=z3;
       result=len*br*hgt;
       cout<<"Volume of cuboid is "<<result<<endl;
    }
    
};
int main()
{
 Volume a(5);
 Volume x(5,10);
 Volume y(5,10,15);

}