//Palindrome number

#include<iostream>
using namespace std;

int main(){

     int num;
    cout<<"Enter a number :";
    cin>>num;

    int n=num;
    int revNum=0; //reverse of the number 
    int digit=0; //gets every digit of the number 


     while(n){
        digit=n%10;
        revNum=revNum*10+digit;
        n=n/10;

    }
 

    if (revNum==num){

        cout<<"The number "<<num<< " is Palindrome "<<endl;
    }else{
        cout<<"The number "<<num<< " is not a Palindrome "<<endl;

    }


    return 0;
}