//Frinedly numbers pair 
#define MAX(a,b) (a)>(b)?a:b

#include<iostream>
using namespace std;


int main(){

    int numA,numB;
    cout<<"Enter number A :";
    cin>>numA;
  
    cout<<"Enter number B :";
    cin>>numB;

    //finding ratio of numbers divisors (including itself) sum and number itself

     int factorSumA=numA+1;
     int factorSumB=numB+1;

    for(int i=2;i<=(MAX(numA,numB)/2);i++){
        if(numA%i==0 && i<=numA/2){
            factorSumA+=i;
        }
        if(numB%i==0){
             factorSumB+=i;
        }
    }

    cout<<factorSumA<<" "<<numA<<endl;
    cout<<factorSumB<<" "<<numB<<endl;

    if ((factorSumA/numA) == (factorSumB/numB)){
        cout<<"Yes they are a friendly pair of numbers ";
    }else{
        cout<<"No they are not a friendly pair of numbers ";

    }





    return 0;
}