// A C++ program of Implementation of stack using Queue.

#include <bits/stdc++.h>
using namespace std;

class Stack
{
    queue<int> q;

public:
    void push(int val);
    int pop();
    int top();
    bool empty();
};

void Stack::push(int val)
{
    int s = q.size();

    q.push(val);

    for (int i = 0; i < s; i++)
    {
        q.push(q.front());
        q.pop();
    }
}

int Stack::pop()
{
    if (q.empty())
    {
        cout << "No elements\n";
        return -1;
    }
    else
    {
        int x = q.front();
        q.pop();
        return x;
    }
}

int Stack::top()
{
    return (q.empty()) ? -1 : q.front();
}

bool Stack::empty()
{
    return (q.empty());
}

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    cout << "Top : " << s.top() << endl;
    cout << "Pop : " << s.pop() << endl;
    s.push(30);
    cout << "Pop : " << s.pop() << endl;
    cout << "Top : " << s.top() << endl;
    return 0;
}