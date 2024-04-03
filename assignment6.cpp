#include<bits/stdc++.h>
using namespace std;
int main()
{
    int query;
    cin>>query;
    for(int i=0;i<query;i++)
    {
        string str;
        stack<char> st;
        cin>>str;

        for(char c : str)
        {
            if(st.empty())
            {
                st.push(c);
            }
            else 
            {
                if(st.top() == c)
                {
                    st.push(c);
                }
                else
                {
                    st.pop();
                }
            }
        }
        if(st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}