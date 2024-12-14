
#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& v,int size,int key)
{
    int left=0,right=size-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(v[mid]==key) return mid;
        if(v[mid]<key) left=mid+1;
        else right=mid-1;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int key;
    cin>>key;
    int size=v.size();
    int result=binarySearch(v,size,key);
     if(result!=-1)
     {
         cout<<"Found in "<<result<<" position"<<endl;
     }
     else cout<<"Not found"<<endl;


}
