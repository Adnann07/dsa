//merged and sorted

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
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                swapped=true;
            }
        }
        if(!swapped) break;
    }
}


int main(){

    int n;
    cin>>n;

    vector<int> v1,v2;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }

        for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }

   vector<int> merged=v1;
   merged.insert(merged.end(),v2.begin(),v2.end());
    bubbleSort(merged);

    for(int i=0;i<merged.size();i++)
    {
        cout<<merged[i]<<" ";
    }
    cout<<endl;


}
