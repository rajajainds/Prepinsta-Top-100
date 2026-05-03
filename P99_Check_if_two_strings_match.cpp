// Check if two strings match

#include<iostream>
#include<string.h>
using namespace std;

string stringMatch(char str[], char str1[]){

    char *ptstr =str;
    char *ptstr1=str1;

    if (strlen(str)==strlen(str1)){

        while(*ptstr!='\0'){
            *ptstr == *ptstr1 ;
            ptstr++;
            ptstr1++;

        }

    }
    else{
        return "No match";
    }

    return "Match";
}

int main(){


  char str[]="raja";
  char str1[]="raja1";
    cout<<"He strings are "<<stringMatch(str,str1);


    return 0;
}