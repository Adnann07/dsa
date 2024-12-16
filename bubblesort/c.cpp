
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& v)
{
    bool swapped;
    int n=v.size();
    for(int i=0;i<n-1;i++)
    {
        swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1]) //reverse hoile v[j]<v[j+1]
            {
                swap(v[j],v[j+1]);
                swapped=true;
                //count chaile c++;
            }
        }
        if(!swapped) break; //optimized. it stops execution if the array is already sorted.
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
    bubbleSort(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
