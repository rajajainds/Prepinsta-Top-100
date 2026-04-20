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

    while(inputBinary){
        decimalNumber=decimalNumber +(inputBinary%10)*pow(2,iterate);

        inputBinary=inputBinary/10;
        iterate++;
    }
    cout<<"The decimal numebr for "<<input<<" is "<<decimalNumber;

    

    return 0;
}