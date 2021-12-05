#include<iostream>
using namespace std;

int main() {

    int n, r, rev = 0;
    int *ptr;

    cout<<"Program to reverse a number:"<<endl;
    cout << "Enter the number: ";
    cin >> n;

    ptr= &n;

    while (*ptr > 0) {
        r = *ptr % 10;
        rev = rev * 10 + r;
        *ptr = *ptr / 10;
    }

    cout << "Reversed number is:" << rev;

    return 0;
}