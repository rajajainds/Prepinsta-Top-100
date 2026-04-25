// Largest number in an array uning recursion

#include<iostream>
using namespace std;

int largestNum(int n, int arr[]){

   if(n==1) {
    return arr[0];
   } 

   return max(arr[n-1], largestNum(n-1, arr));
}

 int main(){ 

    int arr[] = {2,34,54,12,56,16};

     int n = sizeof(arr)/sizeof(arr[0]); 

     cout<<"Largest number is : "<<largestNum(n, arr);
    
    return 0;

}


