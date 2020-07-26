#include <iostream>
#include <stack>

using namespace std;

template<typename T>
T getBottomAndRemoveStack(stack<T> &s)
{
    T result = s.top();
    s.pop();
    if(s.empty())
    {
        return result;
    }
    T last = getBottomAndRemoveStack(s);
    s.push(result);
    return last;
}

template<typename T>
void reverseStack(stack<T> &s)
{
    if (s.empty())
        return;
    T i = getBottomAndRemoveStack(s);
    reverseStack(s);
    s.push(i);
}

int main()
{
    int data[5] = {1,2,3,4,5};
    stack<int> s;
    for (int i = 0; i < 5; i++)
        s.push(data[i]);
    reverseStack(s);
    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}
