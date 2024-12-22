//sort a subarray

#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& v,int l,int r)
{

    for(int i=l+1;i<=r;i++)
    {
        int j=i-1;
        int temp=v[i];
        while(j>=l && v[j]>temp)
        {
            v[j+1]=v[j];
            j--;
        }
     v[j+1]=temp;
    }

}

int main()
{
    vector<int> v;
    int n,l,r;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);


    }
    cout<<"enter lower value: "<<endl;
    cin>>l;
     cout<<"enter upper value: "<<endl;
    cin>>r;
    insertionSort(v,l,r);

    for(int i=l;i<=r);i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}



