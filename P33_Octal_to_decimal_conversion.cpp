// Octal to decimal conversion 

#include<iostream>
#include<math.h>
using namespace std;


int main(){
    long int inputOctal;
    cout<<"Enter the Octal number :";
    cin>>inputOctal;

    long int input=inputOctal;

    int decimalNumber=0;
    int iterate=0;
    int digit;

    while(inputOctal){
        digit=inputOctal%10;
        if(digit>=0 && digit<=8){

        decimalNumber=decimalNumber +(digit)*pow(8,iterate);

        inputOctal=inputOctal/10;
        iterate++;
        }else{
            break;
        }
    }
    if(digit==1 || digit==0){
    cout<<"The decimal number for "<<input<<" is "<<decimalNumber<<endl;
    }else{
        cout<<"Please enter a valid Octal string"<<endl;
    }
    

    return 0;
}