//Highest Common Factor

#include<iostream>
using namespace std;

int getHCF(int a, int b)
{
    return b == 0 ? a : getHCF(b, a % b); 
}

int main(){
    int numA=78,numB=24;

    numA = (numA > 0) ? numA : -numA;
    numB = (numB > 0) ? numB : -numB;

    cout<<"HCF of "<<numA<<" and "<<numB<<" is "<<getHCF(numA, numB);

    return 0;
}