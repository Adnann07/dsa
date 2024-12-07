// Find an Element in a Sorted Array
#include <bits/stdc++.h>
using namespace std;


bool binarySearch(int a[],int size,int key)
{
    int left=0,right=size-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;

        if(a[mid]==key) return true;
        else if(a[mid<key]) left=mid+1;
        else right=mid-1;
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    int key=5;
    if(binarySearch(a,size,key)) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
}
