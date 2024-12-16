//sorting two arrays together
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& v,vector<int>& v2)
{
    bool swapped;
   for(int i=0;i<key-1;i++)
   {
       swapped=false;
       for(int j=0;j<key-i-1;j++)
       {
           if(v[j]>v[j+1])
           {
               swap(v[j],v[j+1]);
               swap(v2[j],v2[j+1]);
               swapped=true;
           }
       }
       if(!swapped) break;
   }
}

int main()
{
    int n;
    cin>>n;
    vector<int> v,v2;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }

    bubbleSort(v,v2);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

     for(int i=0;i<n;i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

}


