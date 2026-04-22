// Addition of two fractions

#include<iostream>
using namespace std;

int getHCF(int a, int b)
{
    return b == 0 ? a : getHCF(b, a % b); 
}

int main(){
    int aNum,aDen;
    int bNum,bDen;

    cout<<"Enter the numerator and denominator of fraction A : ";
    cin>>aNum>>aDen;

     cout<<"Enter the numerator and denominator of fraction D : ";
     cin>>bNum>>bDen;

     int numerator =( aNum*bDen + bNum*aDen);
     int denominator = (aDen*bDen)/getHCF(aDen,bDen);

     int gcd= getHCF(numerator,denominator);

     numerator = numerator/gcd;
     denominator= denominator/gcd;
     cout<<"The sum of the fractions is "<<numerator<<"/"<<denominator;





    



    return 0;
}

