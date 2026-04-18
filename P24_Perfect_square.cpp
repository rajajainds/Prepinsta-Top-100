// Perfect Square 

#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int num;
    cout<<"Enter a number ";
    cin>>num;


    int sqRoot;
    int i=2;

    while(num>i*i){
        i++;
        if(num==i*i){
            sqRoot=i;
        }
        
    }


    if (num==i*i){

        cout<<"The number "<<num<<" is Perfect Sqaure ";
        
    }else{
        cout<<"The number "<<num<<" is not a Perfect Sqaure ";

    }




    return 0;
}