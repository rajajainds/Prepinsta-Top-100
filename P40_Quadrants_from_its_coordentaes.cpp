// Quadrants from its coordinates

#include<iostream>
using namespace std;

int main(){

    int xCord,yCord;
    cout<<"Enter X coordinate :";
    cin>>xCord;

    cout<<"Enter Y coordinate :";
    cin>>yCord;

    if(xCord>0){
        if(yCord>0){
            cout<<"Quadrant I";
        }

        else{
            cout<<"Quadrant IV";
        }

    }else{

        if(yCord<0){
            cout<<"Quadrant III";
        }

        else{
            cout<<"Quadrant II";
        }
    }

    return 0;
}