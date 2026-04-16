//Reverse of a number

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

    cout<<"The reverse  of number "<<num<< " is "<<revNum<<endl;


    return 0;
}