#include<bits/stdc++.h>
using namespace std;
int reverseBubbleSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
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

int linearSearch(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
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

    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);

    cout<<"reversed array: ";
    reverseBubbleSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;


    int key=10;
    int index=linearSearch(int a[], int n,int key)


    if(index=-1)
    {
        cout<<key<<index;
    }
    else
    {
        cout<<"not found"<<endl;
    }



}
