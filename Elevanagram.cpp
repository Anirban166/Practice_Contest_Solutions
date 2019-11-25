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
