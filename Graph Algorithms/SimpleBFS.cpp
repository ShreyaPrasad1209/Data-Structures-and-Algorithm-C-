// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	   queue<int>q;
	   q.push(0);
	   vector<int>ans;
	   vector<bool>visited(V, false);
	   visited[0]=true;
	   while(!q.empty())
	   {

	       int first = q.front();
	       q.pop();
	       ans.push_back(first); 
	     
	       for(int i=0;i<adj[first].size();i++)
	       {
	           if(visited[adj[first][i]]==false)
	           {
	               q.push(adj[first][i]);
	               visited[adj[first][i]]=true;  
	           }
	           
	       }
	   }
	   
	   return ans;
	}
};




vector<int>adj[V];

for(int i=0;i<adj.size();i++)
{
    cout<<adj[i]<<"->";
    
    for(int x: adj[i])
    {
        cout<<x;
    }
    
    cout<<endl;
}



0 -> 1, 2, 3
1
2
3
4






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
    // 		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
