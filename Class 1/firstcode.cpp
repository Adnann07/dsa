
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
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

int main(){

    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++)
    {
        a[i]=1+rand()%100;
    }
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;


    bubbleSort(a,size);

     for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int key=5;

     int i= linearSearch(a,size,key);

    if(i!=-1)
    {
        cout<<key<<" has been found in "<<i<<endl;
    }
    else cout<<key<<" not found"<<endl;







}
