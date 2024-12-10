
// Reverse a Vector

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
    reverse(v.begin(),v.end());

    cout<<"Reversed vector: "<<endl;

    for(int num:v)
    {
        cout<<num<<" ";
    }
    cout<<endl;
}
