#include<iostream>
#include <cstring>
using namespace std;
int len;
char str[20];
int i;
int main()
{
    cout<<"Enter the string"<<endl;
    cin.get(str,20);
    len=strlen(str);
    for(i=0;i<len;i++);
    cout<<"Length of string is "<<i<<endl;
    cout<<"Reverse of string is: "<<endl;
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}
