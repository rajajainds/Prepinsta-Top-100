//sum of natural numners in a given range 

#include<iostream>

using namespace std;

int main(){

    int start,end;

    
    cout<<"Enter starting nummber (to include):";
    cin>>start;
    cout<<"Enter ending nummber (to include):";
    cin>>end;

    int sumRange=(int)(((end)*(end+1))/2  - ((start-1)*(start))/2);

    cout<<"The sum of numbers in range start: "<<start<<" and end :"<<end<< " is : "<<sumRange<<endl; 


    return  0;
}