#include <iostream>
#include <string>
#include <queue>

using namespace std;

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

class PetEnterQueue
{
private:
    Pet pet;
    int countNo;
public:
    PetEnterQueue(Pet& pet, int countNo):pet(pet),countNo(countNo)
    {
    }
    Pet getPet()
    {
        return pet;
    }
    int getCount()
    {
        return countNo;
    }
    string getPetType()
    {
        return pet.getPetType();
    }
};

class CatsAndDogsQueue
{
private:
    queue<PetEnterQueue> dogs;
    queue<PetEnterQueue> cats;
    int countNo;
public:
    CatsAndDogsQueue():countNo(1){}
    void add(Pet& pet)
    {
        PetEnterQueue p(pet,countNo);
        string type = p.getPetType();
        if (type == "Cat")
            cats.push(p);
        else
            dogs.push(p);
        countNo++;
    }
    void pollAll()
    {
        while (!cats.empty() && !dogs.empty())
        {
            if (cats.front().getCount() < dogs.front().getCount())
            {
                cout << cats.front().getPetType() << endl;
                cats.pop();
            }
            else
            {
                cout << dogs.front().getPetType() << endl;
                dogs.pop();
            }
        }
        while (!dogs.empty())
        {
            cout << dogs.front().getPetType() << endl;
            dogs.pop();
        }
        while (!cats.empty())
        {
            cout << cats.front().getPetType() << endl;
            cats.pop();
        }
    }

    void pollDog()
    {
        while (!dogs.empty())
        {
            cout << dogs.front().getPetType() << endl;
            dogs.pop();
        }
    }
    void pollCat()
    {
        while (!cats.empty())
        {
            cout << cats.front().getPetType() << endl;
            cats.pop();
        }
    }
    bool isEmpty()
    {
        return cats.empty() && dogs.empty();
    }
    bool isDogEmpty()
    {
        return dogs.empty();
    }
    bool isCatEmpty()
    {
        return cats.empty();
    }
};

int main()
{
    CatsAndDogsQueue myQueue;
    Cat cat1;
    Cat cat2;
    Dog dog3;
    Cat cat4;
    Dog dog5;
    myQueue.add(cat1);
    myQueue.add(cat2);
    myQueue.add(dog3);
    myQueue.add(cat4);
    myQueue.add(dog5);

    //myQueue.pollAll();
    //myQueue.pollCat();
    //myQueue.pollDog();


    return 0;
}
