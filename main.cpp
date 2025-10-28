#include <iostream>
#include "Selection_Sort.h"
using namespace std;


int main()
{
    int n;
    int arr[100];
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    selectionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }



    return 0;
}
