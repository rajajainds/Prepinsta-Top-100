//sum of digits of a number

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;

    int n=num;
    int sum=0; //takes sum of every digit
    int digit=0; //gets every digit of the number 

    while(n){
        digit=n%10;
        sum+=digit;
        n=n/10;

    }

    cout<<"The sum of digits of number "<<num<< " is "<<sum<<endl;


    return 0;
}