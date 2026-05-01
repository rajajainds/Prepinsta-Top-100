// Remove spaces from a string

#include<iostream>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(){

    string s = "Ra ja Ja i n ";
    cout << "string with spaces is " << s << endl;

    int l = s.length(); 
    int c= count(s.begin(), s.end(),' '); 

    remove(s.begin(), s.end(),' '); 
    s.resize(l - c); 

    cout << "string without spaces is " << s << endl;
 
    return 0;
}