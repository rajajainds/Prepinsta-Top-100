//prime number 

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

    int num=1;

    if(num==1){

        cout<<num<<" is 1, not a prime number "<<endl;

    }else if(isPrime(num)){
        cout<<num<<" is a prime number "<<endl;
    }else{
        cout<<num<<" is not a prime number "<<endl;

    }


    return 0;
}