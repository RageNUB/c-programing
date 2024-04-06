#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

using pii = pair<long long int, int>;

const int N = 1e6 + 7;
vector<pii> v[N];
long long int dist[N];

void dijkstra(int s) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, s});
    dist[s] = 0;

    while (!pq.empty()) {
        pii parent = pq.top();
        pq.pop();
        int parentNode = parent.second;
        long long int parentCost = parent.first;

        for (auto& child : v[parentNode]) {
            int childNode = child.first;
            long long int childCost = child.second;
            long long int combinedCost = parentCost + childCost;

            if (combinedCost < dist[childNode]) {
                dist[childNode] = combinedCost;
                pq.push({dist[childNode], childNode});
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    while (e--) {
        int a, b;
        long long int w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }

    int s, testCase;
    cin >> s >> testCase;

    fill(dist, dist + N, LLONG_MAX);

    dijkstra(s);

    for (int i = 0; i < testCase; i++) {
        long long int d, cost;
        cin >> d >> cost;
        if (dist[d] <= cost)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

// Corrected by ChatGPT. Submitting for checking...........