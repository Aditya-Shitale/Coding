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

void BFS(int V, vector<int> adj[])
{
    // Code here
    // DECLARE A QUEUE TO STORE TRAVERSALS
    queue<int> q;
    // DECLARE A VISITED ARRAY
    vector<int> vis(V, 0);
    vis[0] = 1;
    vector<int> bfs;
    // INITIALLY PUSH 0 IN QUEUE
    q.push(0);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        cout << node << " ";
        // TRAVERSE NEIGHBOUR NODES AND MARK THEM AS VISITED AND PUSH INTO THE QUEUE
        for (int i = 0; i < adj[node].size(); i++)
        {
            if (vis[adj[node][i]] != 1)
            {
                vis[adj[node][i]] = 1;
                q.push(adj[node][i]);
            }
        }
    }
    return;
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
    BFS(m, adj);
    return 0;
}

/*
INPUT
5 4
0 1
0 2
0 3
2 4
OUTPUT
0 1 2 3 4
*/