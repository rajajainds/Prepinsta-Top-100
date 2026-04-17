//Power of a number 

#include<iostream>
using namespace std;

int main(){
    int num,pow;

    cout<<"Enter the number :";
    cin>>num;

    cout<<"Enter the power to the number  :";
    cin>>pow;

    int result=1;


    for(int i=1;i<=pow;i++){
        result*=num;
    }

    cout<<"The power to the number is :"<<result;




    return 0;
}

