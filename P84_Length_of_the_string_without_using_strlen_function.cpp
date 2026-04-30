// Length of the string without using strlen() function

#include<iostream>
using namespace std;

int main(){

    string s="rajajain";
    int length=0;


    for(char c:s){
        length+=1;

    }

    cout<<"The length of the string "<<s<<" is "<<length<<endl;

    return 0;
}