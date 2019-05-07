//Time Complexity = O(sqrt(n))

#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> factors_of_n(int n)
{
	vector<int> f;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			f.push_back(i);
			if(i!=n/i)
			{
				f.push_back(n/i);
			}
		}
	}
	sort(f.begin(),f.end());
	return f;
}

int main()
{
	int n;
	cin >> n;
	vector<int> v = factors_of_n(n);
	for(int i=0;i<v.size();i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}
