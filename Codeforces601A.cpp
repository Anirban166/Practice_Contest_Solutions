//Author:Anirban166 | Codeforces 601 A - Naive method (without DP) - 5 mins
#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

#define pb push_back
#define sz(x) int((x).size())

typedef long long ll;
typedef long double ld;
using namespace std;

int main() 
{ 
  ios::sync_with_stdio(false);
  int t; cin>>t;
  while(t--)
  {
  int c=0;
  int a,b;
  cin>>a>>b;
  if(b-a==5 || b-a==2 || b-a==1 || a-b==5 || a-b==2 || a-b==1) //1 press
  cout<<1;
  else if(a==b) //0 press
  cout<<0;
  else 
  { 
      
  if(b>a)     
  {   int arr[1]; arr[0]=0;
  while((b-a)>=5)
    { a=a+5;
      if((b-a)%2==0 || (b-a)==1 || (b-a)==3 || a>b)
      break;
      c=c+1; arr[0]+=c;
    }
    
    while((b-a)>=2)
    { a=a+2;
      if((b-a)%1==0 || a>b)
      break;
      c=c+1; arr[0]+=c;
    }
    if((b-a)==1)
   { c=c+1; arr[0]+=c; }
   cout<<arr[0];
  }
    //---------------------------------------------------------
  else
  { int arr[1]; arr[0]=0;
    while(abs(b-a)>=5) 
    { a=a-5;
      if(abs(b-a)%2==0 || (b-a)==1 || (b-a)==3 || a>b || a-5<0)
      break;
      c=c+1; arr[0]+=c;
    }
    
    while(abs(b-a)>=2) 
    { a=a-2;
      if(abs(b-a)%1==0 || a>b || a-2<0)
      break;
      c=c+1; arr[0]+=c;
    }
    if(abs(b-a)==1 && a>b || a-1<0)
    {c=c+1; arr[0]+=c;}
    
    cout<<arr[0];
  }
  }//last else

  }//test
  return 0; 
  }

