#include<iostream>
using namespace std;
int linearsearch(int arr[],int k,int n)
{
  for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
         cout<<"Element is present at  position "<<i+1<<endl;
         else if(n<0)
          return 0;
        else
          n=n-1;
         linearsearch(arr,k,n);
    }  
}
int main()
{
    int arr[20];
    int n,k;
    int value;
    cout<<"How manyy elements do you want to enter? "<<endl;
    cin>>n;
     cout<<"Enter the element to be added "<<endl;
    for(int i=0;i<n;i++)
    {
       
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched "<<endl;
    cin>>k;
    
    value=linearsearch(arr,k,n);
return 0;
}