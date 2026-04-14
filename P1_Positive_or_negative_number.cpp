// positive or negative number 

#include<iostream>
using namespace std;


int main(){

    int num;
    cout<<"Enter a number :";
    cin>>num;

    if(num>0){
        cout<<"Number "<<num<<" is positive"<<endl;
    }else if(num<0){
        cout<<"Number "<<num<<" is nagative"<<endl;
    }else{
        cout<<"Number "<<num<<" is zero"<<endl;
    } 

    return 0;
}