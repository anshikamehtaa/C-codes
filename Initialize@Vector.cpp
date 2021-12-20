#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //Vector Initializing 1st method
    vector<int>v={9,12,26,67};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //Vector Initializing 2nd method
    vector<int>v2;
    v2.push_back(8);
    v2.push_back(10);
    v2.push_back(18);
    v2.push_back(20);
    v2.push_back(22);
    
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2.at(i)<<" ";
    }
}
