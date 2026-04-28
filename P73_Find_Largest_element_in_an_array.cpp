// Find Largest element in an array

#include<iostream>
using namespace std;

int main(){

    int arr[]={2,54,12,34,56,76,32};

    int largest=0;

    for(int s:arr){
        if(largest<s){
            largest=s;
        }
    }
    
    cout<<"The largest element in array is "<<largest<<endl;

    







    return 0;
}