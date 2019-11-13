#include"Anirban166.h"
#include<iostream> 
#include<vector>
using namespace std;
int Similarcount(int n)
{
	int binaryNum[32];
	int i = 0, c = 0;
	while (n > 0)
	{
		binaryNum[i] = n % 2;
		if (binaryNum[i] == 1) c++;
		n = n / 2;
		i++;
	}
	return c;
}
int main()
{
	bool similar=false;
	int n; cin >> n;
	vector<int>arr;
	int e;
	for (int i = 0; i < n; i++)
	{
		cin >> e;	arr.push_back(e);
	}

	vector<int>b(arr.size());
	int x;
	for (x = 0; x < 100; x++) // replace 100 by max (modulo not required) and take ll if required.
	{
		for (int i = 0; i < n; i++)
		{
			b[i] = arr[i] ^ x;
		}

		int c = Similarcount(b[0]), count = 0;
		for (auto i : b)
			if (Similarcount(i) == c)
				count++;
		if (count == b.size()) //elements of array b similar
		{
			 similar = true; cout << x; break;
		}
	
	}
	if(similar==false) cout << -1;
	return 0;
}
