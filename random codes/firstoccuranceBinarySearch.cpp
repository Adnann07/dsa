//First Occurrence of a Target Using Binary Search
#include<bits/stdc++.h>
using namespace std;

int firstOcc(vector<int>& a,int size,int key)
{
    int left=0,right=size-1;

    while(left<=right)
    {
        int mid=left+(right-left)/2;

        if(a[mid]==key) return mid+1;
        else if(a[mid]<key) left=mid+1;
        else right=mid-1;
    }
    return -1;
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
    int key;
    cin>>key;
    int size=v.size();

    int result=firstOcc(v,size,key);
    if(result!=-1) cout<<key<<" has been found in "<<size<<" position"<<endl;
    else cout<<"not found"<<endl;
}
