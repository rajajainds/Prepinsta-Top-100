// finding prime factors of a number 


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


int numGiven;
cout<<"Enter a number :";
cin>>numGiven;

int iterate=2;
if(isPrime(numGiven)){
cout<<"number is Prime number "<<endl;
}else{
    cout<<"prime factors are :"<<endl;
while(iterate<=(int)(numGiven/2)){
        if (numGiven%iterate==0 && isPrime(iterate)){
            printf("%d\n",iterate);
        }
        iterate++;

    }}

    return 0;
}