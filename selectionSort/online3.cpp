#include<bits/stdc++.h>
using namespace std;

int selectionSort(vector<int>& a,int k)
{
    int n=a.size();
    for(int i=0;i<n-1;i++)
    {
        int indexMin=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[indexMin]<a[j]%k)
            {
                indexMin=j;

            }
        }
        swap(a[i],a[indexMin]);
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
    int k;
    cout<<"k: "<<endl;
    cin>>k;
    selectionSort(v,k);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
