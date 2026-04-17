// Factors of a number

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number to find factors of :";
    cin>>num;

    cout<<"Its factors are"<<endl ;

    for(int i=1;i<=(int)num/2;i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }

    return 0;

}