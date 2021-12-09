#include<iostream>
using namespace std;
    /*void RRbyone(int arr[],int n)
    {
       int temp=arr[n-1];
       for(int i=n-2;i>=0;i--)
       {
           arr[i+1]=arr[i];
       }
       arr[0]=temp; 
    }
    void Rightrotate(int arr[],int d,int n)
    {
        for(int i=0;i<d;i++)
        RRbyone(arr,n);
    }
    */
    void printarray(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }  
    
    void LRbyone(int arr[],int n)
    {
       int temp=arr[0];
       for(int i=0;i<=n-1;i++)
       {
           arr[i]=arr[i+1];
       }
       arr[n-1]=temp; 
    }
    void Leftrotate(int arr[],int d,int n)
    {
        for(int i=0;i<d;i++)
        LRbyone(arr,n);
    }
    
int main()
{
    
    int n,shift;
    cout<<"How many numbers do you want to enter?"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the values of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   /* cout<<"By how many digit do you want to right rotate? "<<endl;
    cin>>shift;
    Rightrotate(arr,shift,n);
    cout<<"Elements after Right Rotate"<<endl;
    printarray(arr,n);
    */
    
    cout<<"By how many digit do you want to Left rotate? "<<endl;
    cin>>shift;
    Rightrotate(arr,shift,n);
    cout<<"Elements after Left Rotate"<<endl;
    printarray(arr,n);
    
    
return 0;   
}