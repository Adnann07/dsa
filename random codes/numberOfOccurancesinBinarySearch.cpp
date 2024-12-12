
//Number of Occurrences of a Target Using Binary Search

#include<bits/stdc++.h>
using namespace std;

int findFirstOccurance(vector<int> &v,int size,int key)
{
    int left=0,right=size-1;
    int result=-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;

        if(v[mid]==key)
        {
            result=mid;
            left=left+1;

        }
        else if(v[mid]<key) left=mid+1;
        else right=mid-1;
    }
    return result;
}

int findLastOccurance(vector<int>& v,int size,int key)
{
    int left=0,right=size-1;
    int result=-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(v[mid]==key)
        {
            result=mid;
             left=mid+1;
        }
        else if(v[mid]<key) left=mid+1;
        else right=mid-1;
    }
    return result;
}


int main()
{
    int n,key,size;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
     size=v.size();

    cin>>key;

    int first=findFirstOccurance(v,size,key);
    int last=findLastOccurance(v,size,key);

    if(first!=1 && last!=-1) cout<<last-first+1<<endl;
    else cout<<"Not found"<<endl;
}
