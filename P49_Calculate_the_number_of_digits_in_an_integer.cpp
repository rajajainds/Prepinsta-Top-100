// Calculate the number of digits in an integer

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Entar a number :";
    cin>>num;

    int n=num;
    int count=0;

    while(n){
        n=n/10;
        count++;
    }

    cout<<"The total digits are "<<count;


    return 0;
}