#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> ans;
        stack<int> stack;
        vector<bool> vis(V + 1, false);
        int starting_node = 0;
        stack.push(starting_node);
        auto DFS = [&]()
        {
            while (!stack.empty())
            {
                int x = stack.top();
                stack.pop();
                ans.push_back(x);
                if (!vis[x])
                {
                    vis[x] = true;
                    for (auto e : adj[x])
                    {
                        if (!vis[e])
                        {
                            stack.push(e);
                        }
                    }
                }
            }
        };
        DFS();

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}