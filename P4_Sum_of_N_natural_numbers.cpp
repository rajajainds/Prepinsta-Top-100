//Sum of N natural numbers 

#include<iostream>
using namespace std;

int main(){
    int numOfNumbers;
    cout<<"Enter the numebr of natural numbers :";
    cin>>numOfNumbers;

     int sumTillNum=(int)((numOfNumbers)*(numOfNumbers+1))/2;

    cout<<"The sum of "<<numOfNumbers<<" natural numbers is "<<sumTillNum<<endl;


    return 0;
}