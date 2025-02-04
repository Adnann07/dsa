#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> customers(n,vector<int>(2));

    for(int i=0;i<n;i++)
    {
        cin>>customers[i][0];
        cin>>customers[i][1];
    }
    int arr[n],dep[n];
    for(int i = 0; i < n; i++) {
        arr[i] = customers[i][0];
        dep[i] = customers[i][1];
    }

    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=0,j=0;
    int maxCustomer=0,currCustomer=0;
    while(i<n && j<n)
    {
        if(arr[i]<dep[j])
        {
            currCustomer++;
            maxCustomer=max(maxCustomer,currCustomer);
            i++;
        }
        else
        {
            currCustomer--;
            j++;
        }
    }
    cout<<maxCustomer<<endl;
}
