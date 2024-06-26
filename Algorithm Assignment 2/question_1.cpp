#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (visited[v] == true)
                continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int query;
    cin >> query;
    for (int i = 0; i < query; i++)
    {
        int s, e;
        cin >> s >> e;
        for (int i = 0; i < N; i++)
        {
            visited[i] = false;
            level[i] = 0;
        }
        bfs(s);
        if (visited[e] == false)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << level[e] << endl;
        }
    }
    return 0;
}