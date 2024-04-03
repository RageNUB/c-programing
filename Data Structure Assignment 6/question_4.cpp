#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int query;
    cin >> query;
    while (query--)
    {
        int command, x;
        cin >> command;

        if (command == 0)
        {
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (command == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
        else if (command == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (pq.empty())
                    cout << "Empty" << endl;
                else
                    cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}