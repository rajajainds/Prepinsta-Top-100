// Power of a Number using Recursion

#include<iostream>
using namespace std;

int power(int base ,int exp){
    
    if(exp==0){
        return 1;
    }
    return (base*power(base,exp-1));
}


int main(){

    int base,exp;
    cout<<"Enter the base and exp : ";
    cin>>base >> exp;

    cout<<"Result is : "<<power(base,exp)<<endl;

    

    return 0;
}