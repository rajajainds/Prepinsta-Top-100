// LCM of 2 numbers using recurison

#include<iostream>
using namespace std;


int getHCF(int num1, int num2)
{
   if (num1 == 0)
      return num2;

   if (num2 == 0)
      return num1;

   
   if (num1 == num2)
      return num1;

   if (num1 > num2)
      return getHCF(num1 - num2, num2);

   return getHCF(num1, num2 - num1);
}

int main(){
   int num1 = 2, num2 = 6, HCF = 1;

   HCF = getHCF(num1, num2);

   cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<(num1*num2)/HCF;

 

    return 0;
}