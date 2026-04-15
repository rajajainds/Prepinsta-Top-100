//greatest of two numbers 

#include<iostream>
using namespace std;

int main(){
    int num1,num2;

    cout<<"enter first number :";
    cin>>num1;
    
    cout<<"enter second number :";
    cin>>num2;

    if(num1>num2){
        cout<<"The greater is :"<<num1<<endl;
    }else if (num2>num1){
        cout<<"The greater is :"<<num2<<endl;
    }else{
        cout<<"They are equal "<<endl;
    }

    




    return 0;
}