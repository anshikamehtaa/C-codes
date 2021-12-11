#include<iostream>
using namespace std;
void compare(int arr[],int n,int value)
{
    int position;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==value)
        position=i;
        
    }
    cout<<"Value not present in given array"<<endl;
    for(int i=0;i<n;i++)
    {
        if(i==position)
        continue;
        else
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,value;
    cout<<"How many elements do you want to enter? "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value to be compared"<<endl;
    cin>>value;
    compare(arr,n,value);
}