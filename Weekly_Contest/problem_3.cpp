#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int meltingPoint, initialTemperature;
        cin >> meltingPoint >> initialTemperature;
        int time = 0;
        int temperature = initialTemperature;

        while (temperature < meltingPoint)
        {
            time++;
            temperature = temperature + time;
        }
        cout << time << endl;
    }

    return 0;
}