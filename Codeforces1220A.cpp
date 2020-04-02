// Submitted by Anirban

#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#define for0(i,n)    for (int i=0; i<n; i++)

using namespace std;
using ll=long long;

// zero | one common letters : o,e. uncommons: z/r,n
// hence ++0 for z/r, ++1 for n.

int main()
{
    ll n; string s; int zero=0, one=0;
    cin>>n>>s;
    ll count=0;
    for0(i,s.size())
    { if(s[i]=='r') zero++;
      if(s[i]=='n') one++;
    }
    
    // Biggest number = 1s followed by 0s:
    for0(i, one) cout<<1<<" "; for0(i, zero) cout<<0<<" ";
    
    return 0;
}
