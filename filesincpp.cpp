#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
 string name;
 int cost;
 string str;
 cout << "Enter the item name : ";
 cin >> name;
 cout << "Enter the item cost : ";
 cin >> cost;
 fstream fout("item.txt");
 fout << "The name of the item is : " << name << endl;
 fout << "The cost of the item is : " << cost << endl;
 fout.close();
 fstream fin("item.txt");
 while (!fin.eof())
 {
 getline(fin, str);
 cout << str;
 cout << endl;
 }
 fin.close();
}