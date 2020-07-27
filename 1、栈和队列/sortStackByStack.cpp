#include <iostream>
#include <stack>

using namespace std;

template<typename T>
void printStack(stack<T> &s)
{
    if (s.empty())
        return;
    T t = s.top();
    cout << t << endl;
    s.pop();
    printStack(s);
    s.push(t);
}

template <typename T>
void sortStackByStack(stack<T> &s)
{
    stack<T> help;
    while (!s.empty())
    {
        T temp = s.top();
        s.pop();
        while (!help.empty() && temp > help.top())
        {
            T t = help.top();
            help.pop();
            s.push(t);
        }
        help.push(temp);
    }
    while (!help.empty())
    {
        T t = help.top();
        help.pop();
        s.push(t);
    }
    return;
}


int main()
{
    stack<int> s;
    s.push(3);
    s.push(4);
    s.push(2);
    s.push(5);
    s.push(1);

    printStack(s);

    sortStackByStack(s);
    cout << "===============sort===============" << endl;
    printStack(s);
    return 0;
}
