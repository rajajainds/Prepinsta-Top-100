// Count possible decoding of a given digit sequence

// alphabet number decoding
// 121 -> ABA
// 121 -> AU
// 121 -> LA
// total decoding ways possible -> 3

#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int cnt_decoding_digits(char *dig, int a)
{

    int cnt[a+1]; 
    cnt[0] = 1;
    cnt[1] = 1;

    for (int k = 2; k <= a; k++)
    {
        cnt[k] = 0;

         if (dig[k-1] > '0')
            cnt[k] = cnt[k-1];

       if (dig[k-2] == '1' || (dig[k-2] == '2' && dig[k-1] < '7'))
            cnt[k] += cnt[k-2];
    }
    return cnt[a];
}

int main()
{
    char dig[15];
    cout<<"Enter the sequence : "; cin>>dig;
    int a = strlen(dig);
    cout<<"Possible count of decoding of the sequence : "<< cnt_decoding_digits(dig, a);
    return 0;
}