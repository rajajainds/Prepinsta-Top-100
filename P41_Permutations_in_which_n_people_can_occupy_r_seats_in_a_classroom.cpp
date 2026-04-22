// Permutations in which n people can occupy r seats in a classroom

#include<iostream>
using namespace std;


int fact(int num)
{
int fact=1;

   for(int i=1;i<=num;i++){
    fact*=i;
   }
   return fact;
}

int main(){
    int nPeople,rSeats;

    cout<<"Enter the numebr of Peoples :";
    cin>>nPeople;
    cout<<"Enter the numebr of Seats :";
    cin>>rSeats;

    int result = fact(nPeople)/fact(nPeople-rSeats);
    cout<<"The ways in which people can be arranged is "<<result<<endl;
    


    return 0;
}