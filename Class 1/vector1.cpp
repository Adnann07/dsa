#include<bits/stdc++.h>
using namespace std;

 vector <int> v;

int main()
{
   int n,x;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       v.push_back(x);
   }

   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<" ";
   }

   reverse(v.begin(),v.end());
   cout<<endl;
    for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<" ";
   }
}

