//Sum of first N natural numbers 

#include<iostream>
using namespace std;

int main(){
    int numTill;
    cout<<"Enter the numebr of natural numbers :";
    cin>>numTill;

    int sumTillNum=(int)((numTill)*(numTill+1))/2;

    cout<<"The sum of first "<<numTill<<" natural numbers is "<<sumTillNum<<endl;




    return 0;
}