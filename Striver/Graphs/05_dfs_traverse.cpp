#include <bits/stdc++.h>
using namespace std;
void file()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
}

void dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &ans)
{
    vis[node] = 1;
    ans.push_back(node);
    cout<<node<<" ";
    for (int i = 0; i < adj[node].size(); i++)
    {
        if (vis[adj[node][i]] != 1)
        {
            dfs(adj[node][i], adj, vis, ans);
        }
    }
}

// Function to return a list containing the DFS traversal of the graph.
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    vector<int> ans;
    int node = 0;
    vector<int> vis(V, 0);
    dfs(node, adj, vis, ans);
    return ans;
}

int main()
{
    file();
    int m, n;
    cin >> m >> n;
    vector<int> adj[n + 1];
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int>t;

    t=dfsOfGraph(m, adj);
    return 0;
}
/*
INPUT
5 4
0 2
0 3
0 1
2 4
OUTPUT
0 2 4 3 1
*/