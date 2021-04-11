#include <iostream>
using namespace std;

template<class T>

void bubbleSort(T arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j-1]>=arr[j])
            {
                swap(arr[j],arr[j-1]);
            }
        }
    }
}

int main()
{
    int arr[] = {4,6,3,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
