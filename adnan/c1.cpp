#include<bits/stdc++.h>
using namespace std;

int linearF(vector<int>& v,int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(v[i]==key) return i;
    }
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
    int res= linearF(v,size,key);

    if(res!=-1) cout<<res<<endl;
    else cout<<res<<endl;



}
