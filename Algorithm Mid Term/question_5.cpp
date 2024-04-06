#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;

const int N = 105;
bool visited[N][N];
int dist[N][N];
vector<int> v[N];
vector<pii> path = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {-1, 2}, {-1, -2}, {1, 2}, {1, -2}};
int n, m;

bool isValid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m)
        return true;
    else
        return false;
}
void bfs(int si, int sj)
{
    queue<pii> q;
    q.push({si, sj});
    dist[si][sj] = 0;
    visited[si][sj] = true;
    while (!q.empty())
    {
        pii parent = q.front();
        q.pop();
        int pi = parent.first;
        int pj = parent.second;

        for (int i = 0; i < 8; i++)
        {
            pii p = path[i];
            int ci = pi + p.first;
            int cj = pj + p.second;
            if (isValid(ci, cj) && !visited[ci][cj])
            {
                visited[ci][cj] = true;
                q.push({ci, cj});
                dist[ci][cj] = dist[pi][pj] + 1;
            }
        }
    }
}
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                dist[i][j] = -1;
                visited[i][j] = false;
            }
        }
        int ki, kj, qi, qj;
        cin >> ki >> kj >> qi >> qj;
        bfs(ki, kj);

        if (dist[qi][qj] >= 0)
            cout << dist[qi][qj] << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}