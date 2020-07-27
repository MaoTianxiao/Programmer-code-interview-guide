# Programmer-code-interview-guide
**《程序源代码面试指南》C++代码实现**

题目列表如下：

### 1、设计一个有getMin功能的栈

【题目】**实现一个特殊的栈，在实现栈的基本功能的基础上，再实现返回栈中最小元素的操作。**

【要求】

 - 1.pop、push、getMin操作的时间复杂度都是O(1)。
   - pop()：弹出栈顶元素。
   - push()：压栈。
   - getMin()：获取栈最小元素。
- 2.设计的栈类型可以使用现成的栈结构。

【难度】**※**

【解答】【CPP】[getMinStack.cpp](./1、栈和队列/getMinStack.cpp)

【完成日期】2020年7月26日

---

### 2、由两个栈组成的队列

【题目】**编写一个类，由两个栈实现队列，支持队列的基本操作（add、poll、peek）。**

【要求】

- add()：队列中增加元素。
- poll()：将首个元素从队列中弹出。
- peek()：查看首个元素，并不会移除。

【难度】**※※**

【解答】【CPP】[QueueFromDoubleStack.cpp](./1、栈和队列/QueueFromDoubleStack.cpp)

【完成日期】2020年7月26日

---

### 3、如何仅用递归函数和栈操作逆序一个栈

【题目】一个栈依次压入1、2、3、4、5，那么从栈顶到栈底分别为5、4、3、2、1，将这个栈转置后，从栈顶到栈底为1、2、3、4、5，也就是实现栈中元素的逆序，但是只能使用递归函数来实现，不能使用其他数据结构。

【难度】**※※**

【解答】【CPP】[reverseStackUsingRecursion.cpp](./1、栈和队列/reverseStackUsingRecursion.cpp)

【完成日期】2020年7月26日

---

### 4、猫狗队列

【题目】宠物、猫和狗的类如下：

```C++
class Pet
{
private:
    string type;
public:
    Pet(string type)
    {
        Pet::type = type;
    }
    string getPetType()
    {
        return type;
    }
};
class Cat : public Pet
{
public:
    Cat():Pet("Cat"){}
};
class Dog : public Pet
{
public:
    Dog():Pet("Dog"){}
};
```

实现一种猫狗队列的结构。

【要求】

- 用户可以调用add方法将cat类或dog类的实例放入队列中。
- 用户可以调用pollAll方法，将队列中所有的实例按照进队列的先后顺序依次弹出。
- 用户可以调用pollDog方法，将队列中Dog类的实例按照进队列的先后顺序依次弹出。
- 用户可以调用pollCat方法，将队列中Cat类的实例按照进队列的先后顺序依次弹出。
- 用户可以调用isEmpty方法，检查队列中是否还有dog或cat的实例。
- 用户可以调用isDogEmpty方法，检查队列中是否还有dog类的实例。
- 用户可以调用isCatEmpty方法，检查队列中是否还有cat类的实例。

【难度】**※**

【解答】【CPP】[catsAndDogsQueue.cpp](./1、栈和队列/catsAndDogsQueue.cpp)

【完成日期】2020年7月27日

---

### 5 用一个栈实现另一个栈的排序

【题目】

一个栈中元素的类型为整型，现在想将该栈从顶到底按从大到小的顺序排序，只许申请一个栈。除此之外，可以申请新的变量，但不能申请额外的数据结构，如何完成排序？

【难度】**※**

【解答】【CPP】[sortStackByStack.cpp](./1、栈和队列/sortStackByStack.cpp)

【完成日期】2020年7月27日

---



