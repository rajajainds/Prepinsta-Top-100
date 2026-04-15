//greatest of the three numebrs 

#include<iostream>
using namespace std;

int main(){
     int num1,num2,num3;

    cout<<"enter first number :";
    cin>>num1;
    
    cout<<"enter second number :";
    cin>>num2;

    cout<<"enter third number :";
    cin>>num3;


    if(num1>num2){
        if (num1>num3){
        cout<<"The greatest is :"<<num1<<endl;
        } else{
        cout<<"The greatest is :"<<num3<<endl;
    }
}else if (num2>num3){
    if (num2>num3){
        cout<<"The greatest is :"<<num2<<endl;
        } else{
        cout<<"The greatest is :"<<num3<<endl;
}




    return 0;
}
}