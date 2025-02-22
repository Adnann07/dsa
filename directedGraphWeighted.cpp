#include<bits/stdc++.h>
using namespace std;

int main()
{
    int node,edge;
    cin>>node>>edge;

    vector<vector<int>> adj(node+1);
    vector<vector<int>> weight(node+1);

    for(int i=0;i<edge;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back(v);
        weight[u].push_back(v);
    }

    for(int i=1;i<=node;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<< "("<< weight[i][j] <<")" << " ";
        }
        cout<<endl;
    }


}
