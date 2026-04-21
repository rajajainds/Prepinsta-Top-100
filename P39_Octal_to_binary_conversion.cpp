// Octal to binary conversion

#include<iostream>
using namespace std;

int validOctal(int num){
    int n=num;
    int digit;

    while(n){
        digit=n%10;
        n=n/10;

        if(digit<=7 && digit>=0){
            continue;
        }else{
            return 0;
        }
    }

    return 1;
}

int main(){

    int octalInput;
    cout<<"Enter a octal number :";
    cin>>octalInput;

    int input=octalInput;
    string octalString="";

  if (validOctal(octalInput)){
    int lastDigit;
    string octalDigit="";
    string binaryDigits="";

    while(input){
        lastDigit=input%10;
       

        switch(lastDigit){
            case 0:
            octalDigit="000";
            break;
            case 1:
            octalDigit="001";
            break;
            case 2:
            octalDigit="010";
            break;
             case 3:
            octalDigit="011";
            break;
            case 4:
            octalDigit="100";
            break;
             case 5:
            octalDigit="101";
            break;
             case 6:
            octalDigit="110";
            break;
             case 7:
            octalDigit="111";
            break;


        }
        
        input=input/10;
        string temp =octalString;
        octalString= octalDigit + temp ;
       

        
    }

cout<<"The binary of "<<octalInput<<" octal is "<<octalString<<endl;
  }else{
    cout<<"Please enter a valid Octal string ";

  }

    return 0;
}