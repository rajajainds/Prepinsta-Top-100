//greatest common divisor

#define MIN(a,b) a<=b?a:b

#include<iostream>
using namespace std;

int main(){

    int numA=32;
    int numB=12;

    int gcd=1;

    if(numA==numB){
        gcd=numA;
    }else{
        int min=MIN(numA,numB);

    for(int i=2;i<=min;i++){
        if(numA%i==0 && numB%i==0){
        gcd=i;
        }
    }}


    cout<<"The GCD of "<<numA<<" and "<<numB<<" is "<<gcd<<endl;


    return 0;
}