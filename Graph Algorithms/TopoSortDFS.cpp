#include<bits/stdc++.h>
using namespace std;

void dfsTopo(vector<int> graph[], stack<int>& ans, vector<int>& vis, int idx) {

	vis[idx] = true;
	vector<int> adj = graph[idx];
	for (int i = 0; i < adj.size(); i++)
	{
		if (!vis[adj[i]])
			dfsTopo(graph, ans, vis, adj[i]);
	}
	ans.push(idx);
}

vector<int> topoSort(int V, vector<int> adj[])
{

	vector<int> vis(V + 1, false);

	stack<int> ans;
	for (int i = 0; i < V; i++)
	{
		if (!vis[i])
			dfsTopo(adj, ans, vis, i);
	}

	while (!ans.empty()) {
		cout << ans.top() << " ";
		ans.pop();
	}
	return {};

}

int main()
{
  int n, e;
	cin >> n >> e;               //n = no. of nodes/vertices,  e = no. of edges
	vector<int> adj[n];          //2D vector
	for (int i = 0; i < e; i++)
	{
	  int a, b;
	  cin >> a >> b;
	  adj[a].push_back(b);
	 }
	vector<int> ans = topoSort(n, adj);
  return 0;
 
}
