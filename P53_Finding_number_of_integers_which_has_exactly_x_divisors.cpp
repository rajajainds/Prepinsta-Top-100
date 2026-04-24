// Finding number of integers which has exactly x divisors
// here diviosr indlcue 1 and the numeber itself both somin is 2 

#include<iostream>
using namespace std;

int numOfDivisors(int num){
    int numOfDivisors=2;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            numOfDivisors++;
        }
    }
    return numOfDivisors;
}

int main(){

    int num_upto;
    cout<<"Enter the number upto which to find :";
    cin>>num_upto;

    int divisors;
    cout<<"Enter the number of divisors to have exactly :";
    cin>>divisors;

    for(int i=2;i<=num_upto;i++){
        if(divisors==numOfDivisors(i)){
            cout<<i<<"->";
        }

    }


    return 0;
}