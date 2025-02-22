//unweighted graph undirected

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node,edge;
    cin>>node>>edge;
    vector<vector<int>> adjList(node+1);

    for(int i=0;i<edge;i++)
    {
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for(int i=1;i<=node;i++)
    {
        cout<<i<<"->";

        for(int j=0;j<adjList[i].size();j++)
        {
            cout<<adjList[i][j]<<" ";
        }
        cout<<endl;
    }
}
