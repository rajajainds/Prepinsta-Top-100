// Perfect number 

#include<iostream>
using namespace std;


int main(){

    int num;
    cout<<"Enter a number ";
    cin>>num;

    int n=num;

    int factorSum=0;


    for(int i=1;i<=(int)n/2;i++){
        if(n%i==0){
            factorSum+=i;
        }
    }


    if (num==factorSum){

        cout<<"The number "<<num<<" is Perfect number ";
        
    }else{
        cout<<"The number "<<num<<" is not a Perfect number ";

    }




    return 0;
}