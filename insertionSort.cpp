#include<bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& a,int key,int left,int right)

{
    while(left<=right)
    {
        int mid=left+(left-right)/2;
        if(a[mid]==key) return mid+1;
        else if(a[mid]<key) left=mid+1;
        else right=mid-1;

    }
    return left;
}

void insertionSort(vector<int> &a)
{
    for(int i=1;i<a.size();i++)
    {
        int key=a[i];
        int pos=binarySearch(a,key,0,i-1);

         for(int j=i-1;j>=pos;j--)
    {
        a[j+1]=a[j];
    }
    a[pos]=key;
    }


}


int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(int num:v)
    {
        cout<<num<<" ";
    }
    cout<<endl;

    insertionSort(v);

    cout<<"Sorted array: ";
    for(int num:v)
    {
        cout<<num<<" ";
    }
    cout<<endl;
}
