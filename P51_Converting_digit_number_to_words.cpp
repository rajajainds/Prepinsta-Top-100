// Converting digit/number to words

#include <iostream>
using namespace std;

string ones_digits[] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};

string tens_digits[] = {
    "", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
    "sixteen", "seventeen", "eighteen", "nineteen"
};

string multiple_of_ten[] = {
    "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy",
    "eighty", "ninety"
};

string numToWords(int num) {
    string result = "";

    if (num >= 1000) {
        result += ones_digits[num / 1000] + " thousand ";
        num %= 1000;
    }

    if (num >= 100) {
        result += ones_digits[num / 100] + " hundred ";
        num %= 100;
    }

    if (num >= 20) {
        result += multiple_of_ten[num / 10] + " ";
        num %= 10;

        
    } else if (num >= 10) {
        result += tens_digits[num - 9] + " ";
        return result; // teens handled 
    }

    if (num > 0) {
        result += ones_digits[num] + " ";
    }

    return result;
}

int main() {
    int num = 25;
    cout << num << " in words: " << numToWords(num) << endl;
    return 0;
}
