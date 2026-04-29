// Sort first half in ascending order and second half in descending

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void ascDecFunc(int a[], int n)
{
   sort(a, a+n);
   
   for (int i = 0; i < n / 2; i++)
        cout<<a[i]<<" "; 
   for (int j = n - 1; j >= n / 2; j--)
        cout<<a[j]<<" ";

}

int main()
{
    int arr[] = {3, 2, 4, 1, 10, 30, 40, 20};
    int len = sizeof(arr) / sizeof(arr[0]);
    ascDecFunc(arr, len);

    return 0;
    
}