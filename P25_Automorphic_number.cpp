//Automorphic number 

#include<iostream>
using namespace std;

int main(){

     int num;
    cout<<"Enter a number ";
    cin>>num;

    int lastDigitNum=num%10;

    int sqLastDigit =(num*num)%10;

    if(lastDigitNum==sqLastDigit){
        cout<<"The number is Automorphic number ";
    }else{
        cout<<"The number is not Automorphic number ";
   
    }






    return 0;
}



