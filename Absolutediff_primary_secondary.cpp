#include<iostream>
using namespace std;
int main()
{
    int n;
    int sump=0;
    int sums=0;
    cout<<"Enter the size of matrix to create"<<endl;
    cin>>n;
    int arr[n][n];
    cout<<"enter the value"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
    //Absolute Diagonal difference
    //primary diagonal-secondary diagonal
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        if(i==j)
        sump+=arr[i][j];
    }
    printf("Primary diagonal: %d\n",sump);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        if(i+j==n-1)
        sums+=arr[i][j];
        }
    }
    
    
    printf("Secondary diagonal: %d\n",sums);
    int difference=abs(sump-sums);
    cout<<"Absolute Difference is: "<<difference;

}