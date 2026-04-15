//Prime number within a given range 

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

    int start , end;

    cout<<"Enter start number :";
    cin>>start;

    cout<<"Enter end number :";
    cin>>end;

    for(int num = start;num<=end;num++){
        if(num==1){


    }else if(isPrime(num)){
        cout<<num<<" is a prime number "<<endl;
    }
    }




    return 0;
}