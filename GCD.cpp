//Euclid Algorithm
//Time Complexity = O(log(n)) where n=min(a,b)

#include<iostream>
using namespace std;

int GCD(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	return GCD(b,a%b);
}

int main()
{
	int a,b;
	cin >> a >> b;
	int ans = GCD(a,b);
	cout << ans << endl;
	return 0;
}
