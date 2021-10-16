#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>FloydWarshall(vector<vector<int>>& graph)
{
    int V=graph.size();
    
    vector<vector<int>>dist=graph;
    
    for(int k=0;k<V;k++) //intermediate vertex
    {
        for(int i=0;i<V;i++)   //source vertex
        {
            for(int j=0;j<V;j++)  //destination vertex
            {
                if(dist[i][j] > dist[i][k]+dist[k][j])
                {
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
    
    return dist;
}

int main()
{
    
 
    int V;
    cin>>V;
    vector<vector<int>>graph(V, vector<int>(V,0));
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            int cost;
            cin>>cost;
            graph[i][j]=cost;
        }
    }
    
    vector<vector<int>>ans = FloydWarshall(graph);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
