#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
vector<int> cc;
int ct = 0;

void dfs(int u)
{
    visited[u] = true;

    for (int v : adj[u])
    {
        if (visited[v] == true)
            continue;
        dfs(v);
    }
}

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    ct = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        ct++;

        for (int v : adj[u])
        {
            if (visited[v] == true)
                continue;
            q.push(v);
            visited[v] = true;
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

    for (int i = 0; i < N; i++)
    {
        if (!visited[i])
        {
            bfs(i);
            if (ct > 1)
                cc.push_back(ct);
        }
    }
    sort(cc.begin(), cc.end());
    for (auto it = cc.begin(); it < cc.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}