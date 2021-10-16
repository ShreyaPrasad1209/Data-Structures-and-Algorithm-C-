class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
       bool black=1, white=0;
       queue<int>q;
       q.push(0); 
       vector<int>visited(graph.size(), -1);

       for(int j=0;j<graph.size();j++)
       {
           if(visited[j]!=-1) continue;
           q.push(j);
           visited[j]=white;

        
        while(!q.empty())
        {
            int first=q.front();
            q.pop();
            
            for(int i=0;i<graph[first].size();i++)
            {
                if(visited[graph[first][i]]==-1)
                {
                    q.push(graph[first][i]);
                    
                    if(visited[first]==white)
                    {
                       visited[graph[first][i]]=black; 
                    }
                    
                    else if(visited[first]==black)
                    {
                        visited[graph[first][i]]=white;
                    }
                }
                
                else if(visited[first]==visited[graph[first][i]])
                {
                    return false;
                }
                
            }
          }
       }     
        
        return true;
    }
};
