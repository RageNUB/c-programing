#include <bits/stdc++.h>
#define pii pair<long long int, int>
using namespace std;

long long int dist[105];
bool visited[105];
vector<pii> v[105];

void dijkstra(int s)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, s});
    dist[s] = 0;

    while (!pq.empty())
    {
        pii parent = pq.top();
        pq.pop();
        int parenNode = parent.second;
        if (visited[parenNode])
            continue;
        visited[parenNode] = true;
        long long int parentCost = parent.first;

        for (int i = 0; i < v[parenNode].size(); i++)
        {
            pii child = v[parenNode][i];
            int childNode = child.first;
            long long int childCost = child.second;
            long long int combinedCost = parentCost + childCost;

            if (dist[childNode] > combinedCost)
            {
                dist[childNode] = combinedCost;
                pq.push({dist[childNode], childNode});
            }
        }
    }
}
void set_dist(int n, int s)
{
    for (int j = 1; j <= n; j++)
    {
        dist[j] = LONG_MAX;
        visited[j] = false;
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        long long int w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }

    int query;
    cin >> query;
    for (int i = 1; i <= query; i++)
    {
        int s, d;
        cin >> s >> d;
        set_dist(n, s);
        dijkstra(s);
        if (dist[d] == LONG_MAX)
            cout << "-1" << endl;
        else
            cout << dist[d] << endl;
    }

    return 0;
}