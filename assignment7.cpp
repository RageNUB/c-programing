#include<bits/stdc++.h>
using namespace std;
int main()
{
    int query;
    cin>>query;
    for(int i=0;i<query;i++)
    {
        stack<char> st;
        stack<char> st2;
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            char c;
            cin>>c;
            if(st.empty())
            {
                st.push(c);
            }
            else
            {
                if(st.top() == c)
                {
                    st.pop();
                }
                else if((st.top() == 'R' && c == 'B') || (st.top() == 'B' && c == 'R'))
                {
                    st.pop();
                    if(st.empty())
                    {
                        st.push('P');
                    }
                    else if(st.top() == 'P')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('P');
                    }
                }
                else if((st.top() == 'R' && c == 'G') || (st.top() == 'G' && c == 'R'))
                {
                    st.pop();
                    if(st.empty())
                    {
                        st.push('Y');
                    }
                    else if(st.top() == 'Y')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('Y');
                    }
                }
                else if((st.top() == 'B' && c == 'G') || (st.top() == 'G' && c == 'B'))
                {
                    st.pop();
                    if(st.empty())
                    {
                        st.push('C');
                    }
                    else if(st.top() == 'C')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('C');
                    }
                }
                else 
                {
                    st.push(c);
                }
            }
        }
        while(!st.empty())
        {
            st2.push(st.top());
            st.pop();
        }
        while(!st2.empty())
        {
            cout<<st2.top();
            st2.pop();
        }
        cout<<endl;
    }
    return 0;
}