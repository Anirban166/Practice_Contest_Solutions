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

//----------------
#include <bits/stdc++.h>
using namespace std;
using nagai=long long;
#define sz(x) int((x).size())

const int N=500;
string matr[N];
vector<pair<int,int>>g[N];
int used[N];
vector<int>cur;
int ans1;
void d(int u,bool ch){
	if(used[u])return;
	used[u]=true;
	cur.push_back(u);
	if(ch)
		++ans1;
	for(auto p:g[u]){
		d(p.first,ch^p.second);
	}
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
		 for(int i=0;i<n;++i)cin>>matr[i];
		 int cnt1=n+n-1;
		 for(int i=0;i<N;++i)g[i].clear();
		 for(int i=0;i<n;++i)
			 for(int j=0;j<n;++j){
				 int num1=i+j;
				 int num2=cnt1+i+(n-j-1);
				 g[num1].emplace_back(num2,matr[i][j]=='.');
				 g[num2].emplace_back(num1,matr[i][j]=='.');
			 }
		 int ans=0;
		 memset(used,0,sizeof used);
		 for(int i=0;i<n;++i)
			 for(int j=0;j<n;++j){
				 int num1=i+j;
				 int num2=cnt1+i+(n-j-1);
				 if(matr[i][j]=='.'&&!used[num1]){
					 cur.clear();
					 ans1=0;
					 d(num1,true);
					 int ans2=ans1;
					 ans1=0;
					 for(int x:cur)used[x]=false;
					 d(num2,true);
					 ans+=min(ans1,ans2);
				 }
			 }
		 cout<<ans<<'\n';
	}
	return 0;
}
		       
//----------------
#include <bits/stdc++.h>

using namespace std;
using nagai=long long;
#define sz(x) int((x).size())

nagai c[10];
const int MX=1000;
bool dp[MX][11][12];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	for(int test=1;test<=t;++test){
		 cout<<"Case #"<<test<<": ";
		 int ZER=MX/2;
		 memset(dp,0,sizeof dp);
		 dp[ZER][0][1]=true;
		 for(int i=1;i<=9;++i){
			 cin>>c[i];
			 if(c[i]>11)
				 c[i]=11+(c[i]-11)%22;
			 for(int was=0;was<=MX;++was){
				 for(int oldr=0;oldr<11;++oldr){
					 if(!dp[was][oldr][i])continue;
					 for(int plus=0;plus<=c[i];++plus){
						 int minus=c[i]-plus;
						 int newr=((oldr+plus*i-minus*i)%11+11)%11;
						 if(was+plus-minus>=0&&was+plus-minus<MX)
							 dp[was+plus-minus][newr][i+1]=true;
					 }
				 }
			 }
		 }
		 if(dp[ZER][0][10]||dp[ZER+1][0][10])
			 cout<<"YES\n";
		 else
			 cout<<"NO\n";
	}
	return 0;
}

