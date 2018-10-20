#include<iostream>
using namespace std;

int binary_search(int arr[],int s,int e,int x)
{
	if(e >= s)
	{
		int mid = s + (e-s)/2;
		
		if(arr[mid] == x)							//middle element is the element that we are finding
		return mid;
		
		else if(arr[mid] > x)
		return binary_search(arr,s,mid-1,x);		//element is present in the left half
		
		else if(arr[mid] < x)
		return binary_search(arr,mid+1,e,x);		//element is present in the right half
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
	int ans = binary_search(arr,0,size-1,x);
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
