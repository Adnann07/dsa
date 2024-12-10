//Merge Two Sorted Vectors

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int m;
    cin>>m;
    vector<int> v2(m);
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
    }
    vector<int> mergedV(n+m);

        merge(v.begin(),v.end(),v2.begin(),v2.end(),mergedV.begin());

}
