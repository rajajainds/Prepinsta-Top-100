// Finding Number of times x digit occurs in a given input


#include<iostream>

using namespace std;

int main(){

    int num=233423;

    int x_digit=2;

    int n=num;
    int count_x=0;

    while(n){
        if(x_digit==n%10){
            count_x++;
        }
        n=n/10;
    }

    cout<<"The count of "<<x_digit<<" in number "<<num<<" is "<<count_x<<endl;


    return 0;
}
