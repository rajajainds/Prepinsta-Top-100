// Find Smallest Element in an Array

#include<iostream>
using namespace std;

int main(){
     int arr[]={32,54,12,34,56,76,32};

    int smallest =arr[0];

    for(int s:arr){
        if(smallest>s){
            smallest=s;
        }
    }
    
    cout<<"The smallest element in array is "<<smallest<<endl;


    return 0;
}

