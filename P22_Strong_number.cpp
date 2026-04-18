// Strong number 

#include<iostream>
using namespace std;


int fact(int num){
    
    int fact=1;

   for(int i=1;i<=num;i++){
    fact*=i;
   }

   return fact;
}

int main(){

    int num;
    cout<<"Enter a number ";
    cin>>num;

    int n=num;
    int digit;

    int factSum=0;

    while(n){
        digit=n%10;
        n=n/10;
        factSum+=fact(digit);

        
    }

    if (num==factSum){

        cout<<"The number "<<num<<" is Strong number ";
        
    }else{
        cout<<"The number "<<num<<" is not a Strong number ";

    }




    return 0;
}