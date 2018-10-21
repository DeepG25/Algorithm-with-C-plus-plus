#include <iostream>
using namespace std;

int Parition(int arr[],int s,int e)
{
    int pivot = arr[e];
    int i = s;
    
    for(int j=i;j<e;j++)
    {
        if(arr[j] <= pivot)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            
            i++;
        }
    }
    int temp1 = arr[i];
    arr[i] = arr[e];
    arr[e] = temp1;
    
    return i;
}

void Quick_Sort(int arr[],int s,int e)
{
    if(e >= s)
    {
        int p = Parition(arr,s,e);
        Quick_Sort(arr,s,p-1);
        Quick_Sort(arr,p+1,e);
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
    Quick_Sort(arr,0,n-1);
    cout << "Sorted Array is :-" << endl;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
