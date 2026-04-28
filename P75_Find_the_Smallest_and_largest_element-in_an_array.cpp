// Find the Smallest and largest element in an array

#include<iostream>
using namespace std;

int main(){

    int arr[]={2,54,12,34,56,76,32};

    int largest=arr[0];
    int smallest=arr[0];


    for(int s:arr){
        if(largest<s){
            largest=s;
        }
        if(smallest>s){
            smallest=s;
        }

    }
    
    cout<<"The largest and smallest element in array are "<<largest<<" and "<<smallest<<endl;

    return 0;
}
