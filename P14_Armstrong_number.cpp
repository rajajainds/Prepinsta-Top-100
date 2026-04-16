//Armstrong number 

#include<iostream>
#include<math.h>
using namespace std;

int isArmstrong(int num){
    

    int n=num;
    int armStrongValue=0; //armstrong value  
    int digit=0; //gets every digit of the number 

    int len=0; //length of the number (total digits)

    while(n){

        n=n/10;
        len++;
    }

    n=num;

     while(n){
        digit=n%10;
        armStrongValue+=pow(digit,len);
        n=n/10;

    }
   

    if(armStrongValue==num){
        return 1;
    }else{
        return 0;
    }
 

}



int main(){

    int num;
    cout<<"Enter a number :";
    cin>>num;


    if (isArmstrong(num)){

        cout<<"The number "<<num<< " is Armstrong "<<endl;
    }else{
        cout<<"The number "<<num<< " is not Armstrong "<<endl;

    }

    return 0;
}