#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    cin.ignore();
    for (int i = 0; i < test_case; i++)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        map<string, int> mp;

        string common_word;
        int count = 0;
        while (ss >> word)
        {
            mp[word]++;
            if(mp[word] > count)
            {
                common_word = word;
                count = mp[word];
            }
        }

        cout << common_word << " " << count << endl;
    }
    return 0;
}