// Submitted by Anirban166 
  
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
 
int main ()
{
    char num[20];
    int i, r, len, hex = 0;
    cin >> num;
    len = strlen(num);
    for (i = 0; num[i] != '\0'; i++)
    {
        len--;
        if(num[i] >= '0' && num[i] <= '9')
            r = num[i] - 48;
        else if(num[i] >= 'a' && num[i] <= 'f')
                r = num[i] - 87;
             else if(num[i] >= 'A' && num[i] <= 'F')
                    r = num[i] - 55;
        hex += r * pow(16,len);
    }
    cout<<hex%2;
    return 0;
}

//--------------------------------------------------------

//shortcut: string s; cin>>s; cout<<(s.back() % 2); or cout<<(int)(s.back() & 1);
