//insert into sorted array


#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>&v,int element)
{
    int i=n-1;
    while(i>=0 && a[i]>element)
    {
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=element;

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
    cout<<"enter element: ";
    int element;
    cin>>element;
    insertionSort(v,element);
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


}
