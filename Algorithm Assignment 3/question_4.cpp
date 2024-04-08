#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a, b, w;
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> v;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v.push_back(Edge(a, b, w));
    }

    long long int dist[n + 1];
    for (int i = 1; i <= n; i++)
    {
        dist[i] = LONG_MAX;
    }

    int s, t;
    cin >> s >> t;
    bool cycle = false;
    dist[s] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge val : v)
        {
            if (dist[val.a] != LONG_MAX && (long long)(dist[val.a] + val.w) < (dist[val.b]))
            {
                (dist[val.b]) = (long long)(dist[val.a] + val.w);
            }
        }
    }

    for (Edge val : v)
    {
        if (dist[val.a] != LONG_MAX && (long long)(dist[val.a] + val.w) < (dist[val.b]))
        {
            cycle = true;
            break;
        }
    }

    while (t--)
    {
        int d;
        cin >> d;
        if (!cycle)
        {
            if (dist[d] == LONG_MAX)
                cout << "Not Possible" << endl;
            else
                cout << dist[d] << endl;
        }
    }
    if (cycle)
        cout << "Negative Cycle Detected" << endl;

    return 0;
}