//Sieve of Eratosthenes
//Time Complexity = O(nlog(log(n)))

#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sieve(int n)
{
	vector<int> allprime;
	bool prime[n+1];
	for(int i=0;i<=n;i++)
	{
		prime[i] = true;
	}
	prime[0]=false;
	prime[1]=false;
	for(int i=2;i<=n;i++)
	{
		if(prime[i])
		{
			allprime.push_back(i);
			for(int j=2;i*j<=n;j++)
			{
				prime[i*j]=false;
			}
		}
	}
	return allprime;
}

int main()
{
	int n;
	cin >> n;
	vector<int> ans = sieve(n);
	for(int i=0;i<ans.size();i++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}
