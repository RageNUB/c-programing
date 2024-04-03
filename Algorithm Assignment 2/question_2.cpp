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

    int l;
    cin >> l;
    bfs(0);
    vector<int> answer;
    for (int i = 0; i < N; i++)
    {
        if(l == 0)
        {
            answer.push_back(0);
            break;
        }
        else if(l == level[i])
        {
            answer.push_back(i);
        }
    }
    sort(answer.begin(), answer.end());
    if (answer.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        for (auto it = answer.begin(); it < answer.end(); it++)
        {
            cout << *it << " ";
        }
    }
    return 0;
}