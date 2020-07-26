#include <iostream>
#include <stack>

using namespace std;

template<typename T>
class MyStack
{
private:
    stack<T> data;//存放数据
    stack<T> minData;//存放最小数的辅助栈

public:
    void push(T elem)
    {
        data.push(elem);
        if (minData.empty())
        {
            minData.push(elem);
        }
        else
        {
            if (data.top() <= minData.top())
                minData.push(elem);
        }
        return;
    }
    void pop()
    {
        if (data.empty())
            throw "stack is empty!!";
        if (data.top() == minData.top())
            minData.pop();
        data.pop();
    }
    T getMin()
    {
        if (minData.empty())
            throw "stack is empty!!";
        return minData.top();
    }

};

int main()
{
    MyStack<int> s;
    int temp[5] = {3,4,2,5,1};
    for (int i = 0; i < 5; i++)
    {
        s.push(temp[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << s.getMin();
        s.pop();
    }
    return 0;
}
