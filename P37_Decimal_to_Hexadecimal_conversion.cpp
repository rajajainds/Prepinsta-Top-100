// Decimal to Hexadecimal conversion 

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int decimal;
    cout<<"Enter a decimal number :";
    cin>>decimal;

    int input = decimal;
    string Hexadecimal="";

    while(input){
        int rem = input%16;
        
        switch (rem){
        case 0:
        Hexadecimal+="0";
        break;
        case 1:
        Hexadecimal+="1";
        break;
        case 2:
        Hexadecimal+="2";
        break;
        case 3:
        Hexadecimal+="3";
        break;
        case 4:
        Hexadecimal+="4";
        break;
        case 5:
        Hexadecimal+="5";
        break;
        case 6:
        Hexadecimal+="6";
        break;
        case 7:
        Hexadecimal+="7";
        break;
        case 8:
        Hexadecimal+="8";
        break;
        case 9:
        Hexadecimal+="9";
        break;
        case 10:
        Hexadecimal+="A";
        break;
        case 11:
        Hexadecimal+="B";
        break;
        case 12:
        Hexadecimal+="C";
        break;
        case 13:
        Hexadecimal+="D";
        break;
        case 14:
        Hexadecimal+="E";
        break;
        case 15:
        Hexadecimal+="F";
        break;
        }

        input=input/16;
    }

    reverse(Hexadecimal.begin(), Hexadecimal.end());

    cout<<"Hexadecimal of decimal number "<<decimal<<" is "<<Hexadecimal ;
    

    return 0;
}