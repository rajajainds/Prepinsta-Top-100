// Count the number of vowels

#include<iostream>
using namespace std;

int main(){

    char str[100] = "rajajain";
    int vowels = 0;
    
    for(char chr:str)  
    {
        if(chr=='a'|| chr=='e'||chr=='i'||chr=='o'||chr=='u'
        ||chr=='A'||chr=='E'||chr=='I'||chr=='O' ||chr=='U')
        {
		    vowels++;
        }
    }
    
    cout << "Total Vowels : " << vowels;
    
  
    return 0;
}