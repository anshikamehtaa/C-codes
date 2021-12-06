#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int n,k;
    cout<<"How manyy elements do you want to enter? "<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element to be added "<<endl;
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched "<<endl;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
         cout<<"Element is present at  position "<<i+1<<endl;
    }
return 0;
}