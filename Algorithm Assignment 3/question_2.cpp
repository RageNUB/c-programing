#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    long long int dist[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dist[i][j] = LONG_MAX;
            if (i == j)
                dist[i][j] = 0;
        }
    }
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        if (dist[a][b] > w)
            dist[a][b] = w;
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dist[i][k] != LONG_MAX && dist[k][j] != LONG_MAX && dist[i][j] > dist[i][k] + dist[k][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    int query;
    cin >> query;
    for (int i = 1; i <= query; i++)
    {
        int s, d;
        cin >> s >> d;
        if (dist[s][d] == LONG_MAX)
            cout << "-1" << endl;
        else
            cout << dist[s][d] << endl;
    }

    return 0;
}