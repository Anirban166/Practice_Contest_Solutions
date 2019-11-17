//not fully completed:
//#include"Anirban166.h"
#include <iostream>
#include <algorithm>

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL)
using ll = long long;
using namespace std;

const int N = 1e5 + 10; //10^5
bool comp(int a, int b)
{
	return (a > b);
}

int main()
{
	fast_cin();
	int tc; cin >> tc;
	for (int t = 1; t <= tc; ++t)
	{ 
		cout << "Case #" << t << ": ";
		int N; //papers
		cin >> N;
		int A[N + 1]; //citations
		for (int i = 1; i <= N; ++i)
			cin >> A[i];

		int leastcitations = A[1];
		for (int i = 1; i <= N; ++i)
		{
			if (A[i] < leastcitations)
				leastcitations = A[i];
		}

		int h;
		for (int i = 1; i <= N; ++i) //papers=1
		{  //if no.of papers=max(citations each)
		    if(i==max({A[i]},comp)
			cout<<max({ i, A[i] , maxcitations },comp)<<" ";
		}
		cout << endl;


	}//tc end,return 0;
}
//--------------
#include <bits/stdc++.h>
using namespace std;
#define sz(x) int((x).size())
const int N=100100;
int t[2*N];
int get(int l,int r){
	 l+=N;
	 r+=N;
	 int ans=0;
	 while(l<r){
		 if(l&1)ans+=t[l++];
		 if(r&1)ans+=t[--r];
		 l/=2,r/=2;
	 }
	 return ans;
}
void add(int x,int y){
	 x+=N;
	 while(x)
		 t[x]+=y,x/=2;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	for(int test=1;test<=t;++test){
		 cout<<"Case #"<<test<<": ";
		 int n;
		 cin>>n;
		 int ans=0;
		 vector<int>a;
		 for(int i=0;i<n;++i){
			 int x;
			 cin>>x;
			 a.push_back(x);
			 add(x,1);
			 while(get(ans+1,N)>=ans+1)
				 ++ans;
			 cout<<ans<<' ';
		 }
		 cout<<'\n';
		 for(int x:a)
			 add(x,-1);
	}
	return 0;
}

