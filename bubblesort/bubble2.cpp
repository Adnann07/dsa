//Reverse Sort Using Bubble Sort and Perform Linear Search
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int linearSearch(int a[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==key)
        {
            return i;
        }

    }
    return -1;
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

    bubbleSort( a, size);
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int key=60;
    int i=linearSearch( a, size, key);

    if(i!=-1) cout<<key<<" found in "<<i<<endl;
    else cout<<key<<" not found"<<endl;

}

