
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int child,weight;
    cin>>child>>weight;
    vector<int> v(child);
    for(int i=0;i<child;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int c=0;
    int i=0;
    int j=child-1;
    while(i<=j)
    {
        if(v[i]+v[j]<=weight)
        {
            i++;
            j--;

        }
        else{
            j--;
        }
        c++;
    }
    cout<<c<<endl;

}
