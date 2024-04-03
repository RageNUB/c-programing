#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string> myList;
    string str;
    while(true)
    {
        cin>>str;
        if(str == "end") break;
        myList.push_back(str);
    }
    int query;
    cin>>query;
    string command;
    string address;
    for(int i=0;i<query;i++)
    {
        cin>>command;
        if(command == "visit")
        {
            string newAddress;
            cin>>newAddress;
            
            auto it = find(myList.begin(),myList.end(), newAddress);
            if(it == myList.end())
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                address.assign(newAddress);
                cout<<address<<endl;
            }
            
        } 
        else if(command == "next")
        {
            auto it = find(myList.begin(),myList.end(), address);
            if(it == prev(myList.end(), 1))
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                string newAddress = *next(it, 1);
                cout<<newAddress<<endl;
                address.assign(newAddress);
            }
        } 
        else if(command == "prev")
        {
            auto it = find(myList.begin(),myList.end(), address);
            if(it == myList.begin())
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                string newAddress = *prev(it, 1);
                cout<<newAddress<<endl;
                address.assign(newAddress);
            }
        }
    }
    return 0;
}