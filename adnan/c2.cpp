
#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& v,int size,int key)
{
    int left=0,right=size-1;

  while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(v[mid]==key) return mid;
        else if(v[mid]<key)
        {
            left=mid+1;
        }
        else right=mid-1;
    }

    return -1;
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
    int res= binarySearch(v,size,key);

    if(res!=-1) cout<<res<<endl;
    else cout<<res<<endl;



}
