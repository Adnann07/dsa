#include<bits/stdc++.h>
using namespace std;


int sumof(vector<int>& v,int n)
{
    if(n<=0) return n;

    return(v[n-1], sumof(v,n-1) );
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
    int sum= sumof(v,n);
    cout<<sum<<endl;
}
