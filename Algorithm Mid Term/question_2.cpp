#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 7;
int n, m;
char a[N][N];
bool visited[N][N];
vector<pair<int, int>> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < n)
        return true;
    else
        return false;
}
void dfs(int si, int sj)
{
    visited[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + path[i].first;
        int cj = sj + path[i].second;

        if (isValid(ci, cj) && !visited[ci][cj] && a[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    dfs(si, sj);

    if (visited[di][dj])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}