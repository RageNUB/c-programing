#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 7;
int n, m;
char a[N][N];
bool visited[N][N];
int cnt;
int minimum = INT_MAX;
vector<pair<int, int>> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m)
        return true;
    else
        return false;
}
void dfs(int si, int sj)
{
    visited[si][sj] = true;
    cnt++;
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && a[i][j] == '.')
            {
                cnt = 0;
                dfs(i, j);
                minimum = min(cnt, minimum);
            }
        }
    }
    if (minimum == INT_MAX)
        cout << "-1" << endl;
    else
        cout << minimum << endl;

    return 0;
}