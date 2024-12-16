
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& v,int key)
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
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int key;
    cin>>key;
    bubbleSort(v,key);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}

