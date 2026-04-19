// Abundant Number 

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a numer :";
    cin>>num;

    int factorSum=1;


    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            factorSum+=i;
        }
    }

    if(num<=factorSum){
        cout<<"Yes it is a Abundant Number";
    }else{ 
            cout<<"No it is not a Abundant Number";

        }


    return 0;
}