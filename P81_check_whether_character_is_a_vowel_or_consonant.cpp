// check whether Character is a vowel or consonant

#include<iostream>
using namespace std;


bool isVowel(int c){
 
    c = toupper(c);
    

    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main() {
    char c;
    
    cout << "Enter an alphabet: "; cin >> c;

  
    if (!isalpha(c))
      printf("Non alphabet");
      
    else if (isVowel(c))
        cout << c << " is a vowel";
        
    else
        cout << c << " is a consonant";

    return 0;
}
