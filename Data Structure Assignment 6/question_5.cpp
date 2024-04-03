#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class comp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks)
            return true;
        else if (a.marks == b.marks)
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
        else
            return false;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, comp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    int query;
    cin >> query;
    while (query--)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (command == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (command == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (pq.empty())
                    cout << "Empty" << endl;
                else
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
                cout << "Empty" << endl;
        }
    }
    return 0;
}