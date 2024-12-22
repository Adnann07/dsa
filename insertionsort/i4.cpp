//sort until kth element
#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>& v)
{
    int n=v.size();
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int temp=v[i];
        while(j>=0 && v[j]>temp)
        {
            v[j+1]=v[j];
        }
        v[j+1]=temp;
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
    insertionSort(v);
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
