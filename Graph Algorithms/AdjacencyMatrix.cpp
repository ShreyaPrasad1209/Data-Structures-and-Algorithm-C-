#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>> n>> m;
    
    // declare adjacency matrix
    vector<vector<int>> adj (n, vector<int>(m));
    
    // take edges as input
    
    for(int i=0;i<m;i++)
    {
        int u, v;
        cin>> u >> v;
        
        adj[u][v]=1;
        adj[v][u]=1;
    }

    return 0;
}

// n = nodes
// m = edges
