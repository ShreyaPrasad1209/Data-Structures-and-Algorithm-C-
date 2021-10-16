// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
   
    void helper(vector<int>adj[], int idx, vector<bool>& visited, vector<int>& ans)
    {
        ans.push_back(idx);
        visited[idx]=true;
        
        for(int i=0;i<adj[idx].size();i++)
        {
            if(!visited[adj[idx][i]])
            {
                helper(adj, adj[idx][i], visited, ans);
            }
        }
        
    }
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	  vector<bool>visited(V, false);
	  vector<int>ans;
	  for(int i=0;i<V;i++)
	  {
	      if(!visited[i])
	      {
	         helper(adj, i, visited, ans); 
	      }
	     
	  }
	  
	   
	   return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
