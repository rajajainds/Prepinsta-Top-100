//Lowest Common Multiple

#include<iostream>
using namespace std;

int getHCF(int a, int b)
{
    return b == 0 ? a : getHCF(b, a % b); 
}

int main(){
    int numA=24,numB=60;

    numA = (numA > 0) ? numA : -numA;
    numB = (numB > 0) ? numB : -numB;

    cout<<"LCM of "<<numA<<" and "<<numB<<" is "<<(numA*numB)/getHCF(numA, numB);

    return 0;
}