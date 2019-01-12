//Bubble Sort
//Worst case : O(n^2)

#include<iostream>
using namespace std;

int main()
{
	int n;		//size of array
	cout << "Enter the size of an array: " ;
	cin >> n;
	
	int a[n];		//defining an array
	cout << "Enter the elements of an array: " << endl;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	cout << "Sorted Array is :" << endl;
	for(int i=0;i<n;i++)
	{
		cout << a[i] << " ";
	}
	
	return 0;
}
