// Decimal to binary conversion 

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int decimal;
    cout<<"Enter a decimal number :";
    cin>>decimal;

    int input = decimal;
    string binary="";

    while(input){
        if(input%2==0){
            binary+="0";

        }else{
            binary+="1";
        }
        input=input/2;
    }

    reverse(binary.begin(), binary.end());

    cout<<"binary of number "<<decimal<<" is "<<binary ;
    


    return 0;
}