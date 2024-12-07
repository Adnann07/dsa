// Sort Second Half Using Bubble Sort and Find Median
#include<bits/stdc++.h>
using namespace std;


void bubbleSort(int a[], int start,int end)
{
    for(int i=start;i<end-1;i++)
    {
        for(int j=start;j<end-(i-start);j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int findMedian(int a[],int size)
{
    if(size%2!=0)
    {
        return a[size/2];
    }
    else
    {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2;
    }
}

int main()
{
    int size=10;
    int a[size];

    for(int i=0;i<size;i++)
    {
        a[i]=1+rand()%100;
    }

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    bubbleSort(a,size/2,size);

     for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    int median=findMedian(a,size);
    cout<<median<<endl;
}
