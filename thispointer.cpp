#include <iostream>
using namespace std;
class Test
{
private:
 int x;
public:
 void setX(int x)
 {
 this->x = x;
 }
 void print()
 {
 cout << "x = " << x << endl;
 }
};
int main()
{
 
 Test obj;
 obj.setX(20);
 obj.print();
 return 0;
}