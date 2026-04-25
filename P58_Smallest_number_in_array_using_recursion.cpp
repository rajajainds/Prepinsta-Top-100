// Smallest number in an array using recursion


#include<iostream>
using namespace std;


int smallestNum(int n, int arr[]){

   if(n==1) {
    return arr[0];
   } 

   return min(arr[n-1], smallestNum(n-1, arr));
}

 int main(){ 

    int arr[] = {2,34,54,12,56,16};

     int n = sizeof(arr)/sizeof(arr[0]); 

     cout<<"Smallest number is : "<<smallestNum(n, arr);
    
    return 0;

}