// #include"Anirban166" | g++ -std=c++17 -o Anirban.cpp

// headers: (STL + IO)
#include <bits/stdc++.h> 
#include <iostream>
#include <iomanip>

// loops:
#define loop(n) for(int i = 0; i < n; ++ i)
#define loop(i,n) for(int i = 0; i < n; ++i)
#define revloop(i,n) for (int i = n; i > 0; --i)
// new variants:
#define for0(i,n)    for (int i=0; i<n; i++)
#define for1(i,n)    for (int i=1; i<=n; i++)
#define forab(i,a,b) for (int i=a; i<=b; i++)
#define rof0(i,n)    for (int i=n-1; i>=0; i--)
#define rof1(i,n)    for (int i=n; i>=1; i--)
#define rofab(i,a,b) for (int i=b; i>=a; i--)

// bitwise operations:
#define mul(a,b) a = a << b 
#define div(a,b) a = a >> b  
#define swap(a,b) a ^= b; b ^= a; a ^= b; // Use multi-line macro format.
#define toggle(a,pos) a^(1<<(pos-1))

// <algorithm> operations:
#define iterate(it,x)          for (it=x.B; it!=x.E; it++)
#define fullsort(x)            sort (x.B,x.E)
#define rangedsort(x,a,b)      sort (x.B+a,x.B+b+1)
#define fullreverse(x)         reverse (x.B,x.E)
#define rangedreverse(x,a,b)   reverse (x.B+a,x.B+b+1)

// data types: 
#define ll long long //or `using ll=long long`
#define ull unsigned long long
const int MOD = 1000000007;
const int MAX = 105;
const double PI = acos(-1.0);

// functions:
int SetBit (int n, int X) { return n | (1 << X); }
int ClearBit (int n, int X) { return n & ~(1 << X); }
int ToggleBit (int n, int X) { return n ^ (1 << X); }
bool CheckBit (int n, int X) { return (bool)(n & (1 << X)); }

// unnecessary:
#define  cinstr           cin >> str
#define  getstr           getline (cin,str)
#define  vi               vector <int>
#define  vlld             vector <lld>
#define  si               set <int>
#define  slld             set <lld>
#define  ss               set <string>
#define  vs               vector <string>
#define  pii              pair <int,int>
#define  mii              map <int,int>
#define  msi              map <string,int>
#define  pb               push_back
#define  iterate(it,x)    for (it=x.B; it!=x.E; it++)
#define  sortFull(x)      sort (x.B,x.E)
#define  sortRange(x,a,b) sort (x.B+a,x.B+b+1)
#define  revFull(x)       reverse (x.B,x.E)
#define  revRange(x,a,b)  reverse (x.B+a,x.B+b+1)
#define  endline          "\n"
#define  fortest(t)       while (t--)
#define  s1(a)            scanf("%d",&a)
#define  s2(b)            scanf("%d %d",&a &b);

// templates:
template<typename T, typename U> 
static inline void amin(T &x, U y) 
{ 
    if (y < x) 
        x = y; 
} 
template<typename T, typename U> 
static inline void amax(T &x, U y) 
{ 
    if (x < y) 
        x = y; 
} 

int main()
{ 
  //fast io:
  ios_base::sync_with_stdio(false); // or #define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
  cin.tie(NULL); cout.tie(NULL);
  
  vector<ll>v;
  //use range-based loops
  for(auto i:v) { }
    
  //read whole line from input, containing spaces:
  string s;
  getline(cin, s);
  
  for (i=0; s[i]; i++)  { } //loop without strlen
  // loop breaks when the character array ends. 
  return 0;
  
  //files:
  freopen ("input.txt","r",stdin);
  freopen ("output.txt","w",stdout);
  
  return 0;
}
