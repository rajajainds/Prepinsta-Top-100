//Fibonacci series nth term

#include<iostream>
using namespace std;

int main(){
    int nthTerm;
    cout<<"Enter the term number :";
    cin>>nthTerm;

    int Term=nthTerm;

    int last=0;
    int current=1;
    int next=1;

    
    if(nthTerm>1){
        while(nthTerm){
          
            next=current+last;
            last=current;
            current=next;
            nthTerm--;

        }
    }else{
        cout<<"Enter a big number ";
    }

    cout<<Term<<" term ->"<<last;


    return 0;
}