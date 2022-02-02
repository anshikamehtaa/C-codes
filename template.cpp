#include <bits/stdc++.h>
using namespace std;
template <class T>
void sortArray(T a[], int n)
{
 bool b = true;
 while (b)
 {
 b = false;
 for (size_t i = 0; i < n - 1; i++)
 {
 if (a[i] > a[i + 1])
 {
 T temp = a[i];
 a[i] = a[i + 1];
 a[i + 1] = temp;
 b = true;
 }
 }
 }
}
template <class T>
void printArray(T a[], int n)
{
 for (size_t i = 0; i < n; ++i)
 cout << a[i] << " ";
 cout << endl;
}
int main()
{
 int n = 4;
 int intArr[n] = {56, 56, -510, 10};
 sortArray(intArr, n);
 printArray(intArr, n);
 string strArr[n] = {"We do nothing",
 "Hi I have something",
 "Hello Join something!",
 "(Why to do work)"};
 sortArray(strArr, n);
 printArray(strArr, n);
 float floatArr[n] = {17.2, 15.4, -119.7, 412.77};
 sortArray(floatArr, n);
 printArray(floatArr, n);
 return 0;
}
