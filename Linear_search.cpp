#include<iostream>
using namespace std;

int linear_search(int arr[],int size,int x)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int size;	//size of the array
	cout << "Enter the size of the array:-" << endl;
	cin >> size;
	int arr[size];	//array of int 
	cout << "Enter the elements in array:-" << endl;
	for(int i=0;i<size;i++)
	{
		cin >> arr[i];			//taking inputs
	}
	int x;
	cout << "Enter the element to be found:-" << endl;
	cin >> x;
	int ans = linear_search(arr,size,x);
	if(ans == -1)
	{
		cout << "Element " << x << " is Absent." << endl;
	}
	else
	{
		cout << "Element " << x << " is Present at index "<< ans << "." << endl;
	}
	return 0;
}
