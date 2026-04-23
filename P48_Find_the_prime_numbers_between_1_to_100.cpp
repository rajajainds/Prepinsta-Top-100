// Find the prime numbers between 1 to 100

#include<iostream>
#include<math.h>
using namespace std;

int isPrime(int num){

    for(int i=2;i<=(int)sqrt(num);i++){

        if(num%i==0){
            return 0;
        }
    }

    return 1;
}

int main(){

    for(int i=2;i<=100;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }

    return 0;
}
