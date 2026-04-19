// Harshad number

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Ente a number :";
    cin>>num;

    int n=num;
    int digitSum=0;

    while(n){
        digitSum+=n%10;
        n=n/10;
    }

    if(num%digitSum==0){
        cout<<"Yes it is a Harshd Number";
    }else{
        cout<<"No it is not a Harshd Number";

    }



    return 0;
}