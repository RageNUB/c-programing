#include <bits/stdc++.h>
using namespace std;

char a[255][255];
int n, cnt, total = 0;
bool isValid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < n;
}
void dfs1(int i, int j)
{
    if (!isValid(i, j))
        return;

    if (a[i][j] == '*')
    {
        cnt++;
        return dfs1(i, j + 1);
    }
}
void dfs2(int i, int j)
{
    if (!isValid(i, j))
        return;
    if (a[i][j] == '*')
    {
        cnt++;
        return dfs2(i + 1, j);
    }
}
void dfs3(int i, int j)
{
    if (!isValid(i, j))
        return;
    if (a[i][j] == '*')
    {
        cnt++;
        return dfs3(i + 1, j + 1);
    }
}
void dfs4(int i, int j)
{
    if (!isValid(i, j))
        return;
    if (a[i][j] == '*')
    {
        cnt++;
        return dfs1(i + 1, j - 1);
    }
}
int main()
{
    int k = -1, l = -1;
    bool flag = false;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];

            if (a[i][j] == '*')
            {
                total++;
                if (!flag)
                {
                    k = i;
                    l = j;
                    flag = true;
                }
            }
        }
    }

    if (k == -1 && l == -1)
    {
        cout << "Corrupted Image" << endl;
        return 0;
    }

    cnt = 0;
    dfs1(k, l);
    if (total == cnt)
    {
        cout << cnt * cnt << endl;
        return 0;
    }
    cnt = 0;
    dfs2(k, l);
    if (total == cnt)
    {
        cout << cnt * cnt << endl;
        return 0;
    }
    cnt = 0;
    dfs3(k, l);
    if (total == cnt)
    {
        cout << cnt * cnt << endl;
        return 0;
    }
    cnt = 0;
    dfs4(k, l);
    if (total == cnt)
    {
        cout << cnt * cnt << endl;
        return 0;
    }

    cout << "Corrupted Image" << endl;

    return 0;
}