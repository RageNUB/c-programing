#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
vector<int> neighbour;

void dfs(int u)
{
    visited[u] = true;

    for(int v: adj[u])
    {
        if(visited[v] == true) continue;
        neighbour.push_back(v);
        dfs(v);
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
    }
    
    int k;
    cin >> k;
    dfs(k);
    cout << neighbour.size();

    return 0;
}