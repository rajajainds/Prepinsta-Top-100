// Reverse an Array

#include<iostream>
#include<iterator>
using namespace std;

int main(){

    int arr[]={2,3,4,34,5,4};
    int count = size(arr);


 cout<<"The original array is ";

for(int s:arr){
    cout<<s<<" ";
}
cout<<endl;

    for(int i=0;i<(int)count/2;i++){
        int temp=arr[i] ;
        arr[i] = arr[count-i-1];
        arr[count-i-1]=temp;

    }

    cout<<"The reversed array is ";

for(int s:arr){
    cout<<s<<" ";
}

cout<<endl;
    return 0;
}