int MSTPrims(int n, vector<vector<pair<int, int>>>& graph, int start)
{
	int m = graph.size();
	priority_queue < pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq; //min heap
	pq.push(make_pair(0, start));
	vector<bool> vis(n + 1, false);
	int ans = 0;
	while (!pq.empty()) {

		pair<int, int> top = pq.top();
		pq.pop();
		int w = top.first;
		int v = top.second;

		if (vis[v]) {continue;}

		vis[v] = true;
		ans += w;

		vector<pair<int, int>> adj = graph[v];
		for (int i = 0; i < adj.size(); i++)
		{
			pair<int, int> child = adj[i];
			int vc = child.second;
			if (!vis[vc])
				pq.push(child);
		}

	}
	return ans;
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

	cout << MSTPrims(n, graph, 1) << endl;
}  
