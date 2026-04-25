//Reversing a number using recursion 

#include<iostream>
using namespace std;

void reverse(int num)
{

   if (num < 10) {
      cout<<num;
      return;
   }

   else{
      cout<<num%10;
      reverse(num/10);
   }
}


int main()
{
   int n=98357;

   reverse(n);

   return 0;

}