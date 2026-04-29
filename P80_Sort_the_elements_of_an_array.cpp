// Sort the elements of an array

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
    sort(arr,arr+len);
    for(int s:arr){
        cout<<s<<" ";
    }
    return 0;
    
}


