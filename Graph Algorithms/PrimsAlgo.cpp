#include<bits/stdc++.h>
using namespace std;

int MstPrim(int n, vector<vector<pair<int,int>>>& graph, int start)
{
    int ans=0;
    priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
    vector<bool>visited(n+1, false);
    pq.push(make_pair(0, start));
    
    while(!pq.empty())
    {
        pair<int,int>p=pq.top();
        pq.pop();
        
        int cost = p.first;
        int child = p.second;
        
        if(!visited[child]) continue;
        else
        {
           ans+=cost;
           visited[child]=true; 
        }
        
        
        for(int i=0;i<graph[child].size();i++)
        {
            pair<int,int>p = graph[child][i];
            if(!visited[p.second])
            {
               pq.push(p);
            }
        }
    }
    
    
    return ans;
}




int main()
{
   
    int n;
    cin>>n;
    vector<vector<pair<int,int>>>graph(n, vector<pair<int,int>>());
    for(int i=0;n;i++)
    {
        int u,v,c;
        cin>>u>>v>>c;
        
        graph[u].push_back(make_pair(c,v));
        graph[v].push_back(make_pair(c,u));
    }
    
    cout<<MstPrim(n, graph, 0);
}
