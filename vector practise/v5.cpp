//Erase Duplicates from a Vector
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

    vector<int> uniqueNum;
    set<int> seen;

    for(int num:v)
    {
        if(seen.find(num)==seen.end())
        {
            uniqueNum.push_back(num);
            seen.insert(num);
        }
    }

    for(int num:uniqueNum)
    {
        cout<<num<<" ";
    }
    cout<<endl;
}
