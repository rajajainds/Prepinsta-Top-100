// Last non-zero digit in factorial of a number 

#include<iostream>
using namespace std;

int fact(int num){

    if(num==0){
        return 1;
    }

  return num*fact(num-1);
}

int main(){

int num;
cout<<"Enter a number :";
cin>>num;

int factorial = fact(num);
while(factorial){
    if(factorial%10!=0){
        cout<<"The last digit is "<<factorial%10<<endl;
        break;
    }
    factorial=factorial/10;
    
}

    return 0;
}
