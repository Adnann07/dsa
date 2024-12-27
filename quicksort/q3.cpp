//start as pivot


#include<bits/stdc++.h>
using namespace std;

int partion(vector<int>& v,int start,int end)
{
    int pivot=v[start]; //change
    int i=start; //change
    for(int j=start;j<=end;j++) //change
    {
        if(v[j]<=pivot) //change
        {
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[start],v[i]); //change
    return i;
}

void quickSort(vector<int>& v,int start,int end)
{
    if(start<end)
    {
        int pivot=partion(v,start,end);
        quickSort(v,start,pivot-1);
        quickSort(v,pivot+1,end);
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

    quickSort(v,0,n-1);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

