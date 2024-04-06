#include <bits/stdc++.h>
#define pii pair<long long int, int>
using namespace std;

const int N = 1e6 + 7;
long long int dist[N];
bool visited[N];
vector<pii> v[N];

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
        if(visited[parenNode]) continue;
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
    for (int i = 0; i <= n; i++)
    {
        dist[i] = LONG_MAX;
    }

    int s, testCase;
    cin >> s >> testCase;
    dijkstra(s);

    for (int i = 0; i < testCase; i++)
    {
        long long int d, cost;
        cin >> d >> cost;
        if (dist[d] <= cost)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}