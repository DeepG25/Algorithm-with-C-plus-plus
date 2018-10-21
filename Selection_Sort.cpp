//O(n^2) in worst case...

#include <iostream>
using namespace std;

void Selection_Sort(int arr[],int n)
{
    int i;
    int min;
    for(int i=0;i<n-1;i++)
    {
        min = i;
        for(int j=i;j<n;j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;                    //finding the min element index
            }
        }
        int temp = arr[min];                //swaping two elements
        arr[min] = arr[i];
        arr[i] = temp;
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
    Selection_Sort(arr,n);
    cout << "Sorted Array is :-" << endl;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
