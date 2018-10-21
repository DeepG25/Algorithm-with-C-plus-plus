//O(n^2) in worst case...

#include <iostream>
using namespace std;

void Insertion_Sort(int arr[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int value = arr[i];
        j = i-1;
        
        while(j >=0 && arr[j] > value)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = value;
    }
}

int main()
{
    int n;
    cout << "Enter the no. of elements:-" << endl;
    cin >> n;               //size of array
    int arr[n];
    cout << "Enter the elements of the array:-" << endl;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];      //input of array
    }
    Insertion_Sort(arr,n);
    cout << "Sorted Array is :-" << endl;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
