#include <iostream>
#include <stack>

using namespace std;

template<typename T>
class MyQueue
{
private:
    stack<T> stack1;
    stack<T> stack2;

public:
    void add(T elem)
    {
        stack1.push(elem);
    }

    void poll()
    {
        if (!stack2.empty())
            stack2.pop();
        else if(!stack1.empty())
        {
            copyFromStack1ToStack2();
            stack2.pop();
        }
        else
            throw "queue is empty!!";
        return;
    }

    T peek()
    {
        if (!stack2.empty())
            return stack2.top();
        else if(!stack1.empty())
        {
            copyFromStack1ToStack2();
            return stack2.top();
        }
        else
            throw "queue is empty!!";
    }

private:
    void copyFromStack1ToStack2()
    {
        while(!stack1.empty())
        {
            T temp = stack1.top();
            stack1.pop();
            stack2.push(temp);
        }
    }
};

int main()
{
    MyQueue<int> q;
    int data[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++)
        q.add(data[i]);
    for (int i = 0; i < 5; i++)
    {
        cout << q.peek() << endl;
        q.poll();
    }
    return 0;
}
