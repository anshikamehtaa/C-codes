#include<iostream>
using namespace std;
void swap(int *arr1,int *arr2,int *arr3,int n)
{
    for(int i=0;i<n;i++)
    {
        *(arr3+i)=*(arr1+i);
        *(arr1+i)=*(arr2+i);
        *(arr2+i)=*(arr3+i);
        
    }
    cout<<"Value of array one after swapping "<<endl;
    for(int i=0;i<n;i++)
    {
    cout<<arr1[i]<<" ";
    cout<<endl;
    }
    cout<<"Value of array two after swapping "<<endl;
    for(int i=0;i<n;i++)
    {
    cout<<arr2[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"How many elemnts do you want to enter? "<<endl;
    cin>>n;
    int arr1[n],arr2[n];
    int arr3[n]={0};
    cout<<"Enter the elemnts of array one"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the elemnts of array one"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    swap(arr1,arr2,arr3,n);
}