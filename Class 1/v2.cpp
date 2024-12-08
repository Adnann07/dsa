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

   for(int i=v.size()-1;i>=0;i--)
   {
       cout<<v[i]<<" ";
   }
}


