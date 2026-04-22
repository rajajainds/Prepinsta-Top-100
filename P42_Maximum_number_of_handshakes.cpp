// Maximum number of handshakes

#include<iostream>
using namespace std;

int main(){

    int nPeople;
    cout<<"Enter the number of people present : ";
    cin>>nPeople;

    int totalHandshakes = ((nPeople)*(nPeople-1))/2;

    cout<<"The total handshakes are : "<<totalHandshakes<<endl;



    return 0;
}