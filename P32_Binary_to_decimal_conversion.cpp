// Binary to decimal conversion 

#include<iostream>
#include<math.h>
using namespace std;


int main(){
    long int inputBinary;
    cout<<"Enter the binary number :";
    cin>>inputBinary;

    long int input=inputBinary;

    int decimalNumber=0;
    int iterate=0;
    int digit;

    while(inputBinary){
        digit=inputBinary%10;
        if(digit==1 || digit==0){

        decimalNumber=decimalNumber +(digit)*pow(2,iterate);

        inputBinary=inputBinary/10;
        iterate++;
        }else{
            break;
        }
    }
    if(digit==1 || digit==0){
    cout<<"The decimal number for "<<input<<" is "<<decimalNumber<<endl;
    }else{
        cout<<"Please enter a valid binary string"<<endl;
    }
    

    return 0;
}