#include <iostream>
using namespace std;
int insertionSort(int a[],int n)
{

    for(int j=1;j<n;j++)
    {
        int key=a[j];
        int i=j-1;
    }
    while(i>=0 && a[i]>key)
    {
        a[i+1]=a[i];
        i--;
    }

}


int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

