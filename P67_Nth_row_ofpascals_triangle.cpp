// get the nth row or pascals triangle 

#include<iostream>
using namespace std;

//Function to print N-th row
void getrow(int N)
{
   int last = 1;
   cout << last;

   for (int i = 1; i <= N; i++) {
     int curr = (last * (N - i + 1)) / i;
     cout << " " << curr;
     last = curr;
   }
}


int main()
{

  int N = 5;
  getrow(N);
  return 0;
}