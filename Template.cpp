#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 

//loops:
#define for(i,n) for (int i = 0; i < n; ++i) 
#define for(i,n)reverse for (int i = n; i > 0; --i)
//----------------------------------------------------
#define for(i,k,n) for (int i = k; i <= n; ++i) 
#define for(i,k,n)reverse for (int i = k; i >= n; --i) 

//templates:
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
{ int max=0,min=1e5;
  int array[]= {4, -5, 6, -9, 2, 11}; 
  for (auto const &val: array) 
  amax(max, val), amin (min, val); 
  cout<<amax<<endl<<amin;
  
  //shorthand:
  if (num & 1) cout << "ODD"; else cout << "EVEN"; //bitwise & -> odd/even
  n = n << 1;   // Multiply n with 2              n << x; // Multiply n with x
  n = n >> 1;   // Divide n by 2                  n = n >> x;   // Divide n by x 
  a ^= b; b ^= a; a ^= b; //swap a,b with XOR
  
  for (i=0; s[i]; i++)  { } //loop without strlen
// loop breaks when the character array ends. 


}
