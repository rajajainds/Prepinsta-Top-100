// Finding Roots of a quadratic equation

#include<iostream>
#include<math.h>
using namespace std;

int main(){
// quadractic equations coeffcinets :


    int a,b,c;
    cout<<"If quardratic equation is of thsi form ax^2 + bx + c=0"<<endl;
    cout<<"Enter te value of a b c (just spaced between) :";
    cin>>a>>b>>c;

    int root1= (-b + pow((b*b - 4*a*c),0.5))/(2*a);
    int root2= (-b - pow((b*b - 4*a*c),0.5))/(2*a);

    // if thi sreturns nan or something weird then the roots are not real 
    cout<<"The roots are "<<root1<<" and "<<root2<<endl;


    return 0;
}