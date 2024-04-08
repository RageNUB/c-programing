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
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

const int N = 1e5 + 7;
int parent[N];
int parentLevel[N];
void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentLevel[i] = 0;
    }
}
int dsu_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}
void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if (leaderA != leaderB)
    {
        if (parentLevel[leaderA] > parentLevel[leaderB])
        {
            parent[leaderB] = leaderA;
        }
        else if (parentLevel[leaderA] < parentLevel[leaderB])
        {
            parent[leaderA] = leaderB;
        }
        else
        {
            parent[leaderB] = leaderA;
            parentLevel[leaderA]++;
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_set(n);
    vector<Edge> v;
    vector<Edge> ans;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v.push_back(Edge(a, b, w));
    }
    sort(v.begin(), v.end(), cmp);
    for (Edge val : v)
    {
        int leaderA = dsu_find(val.a);
        int leaderB = dsu_find(val.b);
        if (leaderA == leaderB)
            continue;
        ans.push_back(val);
        dsu_union(val.a, val.b);
    }
    long long int sum = 0;
    for (Edge val : ans)
    {
        sum += (long long)(val.w);
    }
    if(ans.size() == n-1) cout <<sum<<endl;
    else cout<<"-1"<<endl;

    return 0;
}