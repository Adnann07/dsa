//Find the Smallest Element Greater Than Target

#include <bits/stdc++.h>
using namespace std;

int findSmallest(int a[],int size,int key)
{
    int left=0,right=size-1,result=-1;

    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(a[mid]>key)
        {
            result=a[mid];
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return result;
}


int main()
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    int key=6;
    int result = findSmallest(a,size,key);
    if(result!=-1) cout<<"smallest element greater than "<<key<<" is "<<result<<endl;
    else cout<<"no element is larger than "<<key<<endl;
}
