//Armstrong number in a given range

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



    
    int start,end;
    cout<<"Enter a start number  :";
    cin>>start;
    cout<<"Enter a end number  :";
    cin>>end;

    for (int i=start;i<=end;i++){


    if (isArmstrong(i)){

        cout<<"The number "<<i<< " is Armstrong "<<endl;
    }
    }


    return 0;
}
