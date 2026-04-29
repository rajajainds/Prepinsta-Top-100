// Calculate the sum of elements in an array
#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5};
    int sumArray=0;

for(int s:arr){
        sumArray+=s;
}

    cout<<"The sum of elements in array is "<<sumArray<<endl;

    return 0;
}