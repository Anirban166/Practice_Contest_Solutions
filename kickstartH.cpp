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
