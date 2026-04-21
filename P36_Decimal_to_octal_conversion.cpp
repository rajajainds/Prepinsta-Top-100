// Decimal to octal conversion 

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int decimal;
    cout<<"Enter a decimal number :";
    cin>>decimal;

    int input = decimal;
    string octal="";

    while(input){
        int rem = input%8;
        
        switch (rem){
        case 0:
        octal+="0";
        break;
        case 1:
        octal+="1";
        break;
        case 2:
        octal+="2";
        break;
        case 3:
        octal+="3";
        break;
        case 4:
        octal+="4";
        break;
        case 5:
        octal+="5";
        break;
        case 6:
        octal+="6";
        break;
        case 7:
        octal+="7";
        break;
        }

        input=input/8;
    }

    reverse(octal.begin(), octal.end());

    cout<<"octal of decimal number "<<decimal<<" is "<<octal ;
    

    return 0;
}