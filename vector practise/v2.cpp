//Find Maximum and Minimum in a Vector
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
    int maxi=*max_element(v.begin(),v.end());
    int mini=*min_element(v.begin(),v.end());
    cout<<maxi<<" "<<mini<<endl;




}
