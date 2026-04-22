// Replace all 0’s with 1 in a given integer

#include<iostream>
using namespace std;

int reverse(int num){
    int rev=0;

    while(num){
        rev=rev*10 + num%10;
        num=num/10;
    }
    return rev;
}

int main(){

    int number;
    cout<<"Enter a number :";
    cin>>number;

    int n=number;

    int alteredNumber=0;

    int digit;
    while(n){

        digit=n%10;
        n=n/10;

        if(digit==0){
            digit=1;
        }

        alteredNumber=alteredNumber*10 + digit;

    }
    cout<<"The number with replaced 0 with 1 is : "<<reverse(alteredNumber)<<endl;


    return 0;

}