//First occurrence of a target in an unsorted array
#include<bits/stdc++.h>
using namespace std;

int findOcc(vector<int>& v,int key)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==key) return i+1;
    }
    return -1;
}

int main()
{
    int n,key;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"inter key element: ";
    cin>>key;

    int result= findOcc(a,key);
    if(result==-1) cout<<"not found"<<endl;
    cout<<"found in "<<result<<" position"<<endl;

}
