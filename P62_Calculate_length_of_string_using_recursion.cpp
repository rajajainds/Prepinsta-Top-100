// Calculate the length of the string using recursion

#include<iostream>
using namespace std;

int strLength(char *s){
    if(*s =='\0') return 0;


   return (1+strLength(s+1));
}

int main(){
    char str[]="RajaJain";
    cout<<strLength(str);


    return 0;
}