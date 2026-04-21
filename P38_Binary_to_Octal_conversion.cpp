// Binary to octal conversion

#include<iostream>
using namespace std;

int validBinary(int num){
    int n=num;
    int digit;

    while(n){
        digit=n%10;
        n=n/10;

        if(digit==1 || digit==0){
            continue;
        }else{
            return 0;
        }
    }

    return 1;
}

int reverseNum(int num){
     int n=num;
    int revNum=0; //reverse of the number 
    int digit=0; //gets every digit of the number 


     while(n){
        digit=n%10;
        revNum=revNum*10+digit;
        n=n/10;

    }
    return revNum;
}

int main(){

    int binaryInput;
    cout<<"Enter a binary number :";
    cin>>binaryInput;

    int input=binaryInput;
    int octalNumber=0;

  if (validBinary(binaryInput)){
    int last3Digits;
    int octalDigit=0;

    while(input){
        last3Digits=input%1000;

        switch(last3Digits){
            case 0:
            octalDigit=0;
            break;
            case 1:
            octalDigit=1;
            break;
             case 10:
            octalDigit=2;
            break;
             case 11:
            octalDigit=3;
            break;
             case 100:
            octalDigit=4;
            break;
             case 101:
            octalDigit=5;
            break;
             case 110:
            octalDigit=6;
            break;
             case 111:
            octalDigit=7;
            break;

        }
        
        input=input/1000;
        octalNumber=octalNumber*10 + octalDigit ;
        
    }

cout<<"The octal of "<<binaryInput<<" binary is "<<reverseNum(octalNumber)<<endl;
  }else{
    cout<<"Please enter a valid Binary string ";

  }

    return 0;
}