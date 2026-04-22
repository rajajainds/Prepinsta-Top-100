// Can a number be expressed as a sum of two prime

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
    int num;
    cout<<"Enter a number ";
    cin>>num;

    int primePairs=0;
    for(int i=2;i<=num/2;i++){
        if(isPrime(i)){
            if(isPrime(num-i)){
                cout<<"The number "<<num<<" can be expressed as a sum of two primes "<<i<<" and "<<(num-i)<<endl;
                primePairs++;
            }
        }

    }
    
    if(primePairs==0){
        cout<<"The number cannot be expressed as asum of two primes";
    }else{
        cout<<"Above are the pairs in which this number can  be expressed";
    }


    return 0;
}