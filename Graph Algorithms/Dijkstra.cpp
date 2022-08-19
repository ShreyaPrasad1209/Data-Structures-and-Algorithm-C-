#include<bits/stdc++.h>
using namespace std;

vector<int> Dijkstra(int n, vector<vector<pair<int, int>>>& graph, int start)
{
	//Time Complexity: O(V + ElogV)
	
	int m = graph.size();
	priority_queue < pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push(make_pair(0, start));
	vector<int> dist(n + 1, INT_MAX);
	dist[start] = 0;
	while (!pq.empty()) {

		pair<int, int> top = pq.top();
		pq.pop();
		int w = top.first;
		int v = top.second;
		vector<pair<int, int>> adj = graph[v];
		for (int i = 0; i < adj.size(); i++)
		{
			pair<int, int> child = adj[i];
			int wc = child.first;
			int vc = child.second;

			if (dist[vc] > dist[v] + wc) {
				dist[vc] = dist[v] + wc;
				pq.push(make_pair(dist[vc], vc));
			}
		}

	}
	return dist;

}

int main()
{
  int n;
	cin >> n;
	int m;
	cin >> m;

	vector<vector<pair<int, int>>> graph(n + 1, vector<pair<int, int>>());

	for (int i = 0; i < m; i++)
	{
		int x, y, c;
		cin >> x >> y >> c;
		graph[x].push_back(make_pair(c, y));
		graph[y].push_back(make_pair(c, x));
	}

	vector<int> dijans = Dijkstra(n, graph, 0);
	for (int i = 0; i < dijans.size(); i++)
	{
		cout << "Dist from 0 to " << i << " is: " << dijans[i] << endl;
	}
  
  return 0;
}
