
#include<bits/stdc++.h>
using namespace std;

int binarySearchF(vector<int>& v,int size,int key)
{
    int left=0,right=size-1;
    int res=-1;

  while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(v[mid]==key)
        {
            res=mid;
            right=mid-1;
        }
        else if(v[mid]<key)
        {
            left=mid+1;
        }
        else right=mid-1;
    }

    return res;
}

int binarySearchL(vector<int>& v,int size,int key)
{
    int left=0,right=size-1;
    int res=-1;

  while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(v[mid]==key)
        {
            res=mid;
            left=mid+1;
        }
        else if(v[mid]<key)
        {
            left=mid+1;
        }
        else right=mid-1;
    }

    return res;
}


int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int size=v.size();
    int key;
    cout<<"Find: "<<endl;
    cin>>key;
    int f= binarySearchF(v,size,key);
    int l= binarySearchL(v,size,key);

    if(f!=-1 && l!=-1) cout<<l-f+1<<endl;
    else cout<<l<<endl;



}

