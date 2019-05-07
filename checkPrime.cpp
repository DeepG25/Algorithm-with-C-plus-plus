//Time Complexity = O(sqrt(n))

#include<iostream>
#include<math.h>
using namespace std;

bool checkPrime(int n)
{
	if(n<2)
	{
		return false;
	}
	for(int i=2;i<sqrt(n);i++)
	{
		if(n%i==0)	return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	bool prime = checkPrime(n);
	if(prime)
	{
		cout << "It is prime" << endl;
	}
	else
	{
		cout << "It is not prime" << endl;
	}
	return 0;
}
