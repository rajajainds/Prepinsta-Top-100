//Fibonacci Series upto nth term

#include<iostream>
using namespace std;

int main(){
    int nthTerm;
    cout<<"Enter the number of terms :";
    cin>>nthTerm;

    int last=0;
    int current=1;
    int next=1;

    if(nthTerm>1){
        while(nthTerm){
          
            cout<<current<<" -> ";

            next=current+last;
            last=current;
            current=next;
            nthTerm--;

        }
    }else{
        cout<<"Enter a big number ";
    }


    return 0;
}