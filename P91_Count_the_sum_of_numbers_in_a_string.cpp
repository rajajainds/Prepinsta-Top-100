// Count the sum of numbers in a string


#include<iostream>
using namespace std;

int main(){

    string newStr = "R1aj2aj34ai56n";

    int sum=0;

    for(char s:newStr){

        if(isdigit(s)){
            sum+=s -'0';

        }

    }
    cout<<"The sum is : "<<sum<<endl;


    return 0;
}