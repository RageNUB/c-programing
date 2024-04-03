#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> qu;
    string str;
    int query;
    cin>>query;
    for(int i=0;i<query;i++)
    {
        int x;
        cin>>x;
        if(x == 0)
        {
            cin>>str;
            qu.push(str);
        }
        else 
        {
            string name;
            if(!qu.empty())
            {
                name = qu.front();
                qu.pop();
                cout<<name<<endl;
            }
            else 
            {
                cout<<"Invalid"<<endl;
            }
        }
    }
    return 0;
}