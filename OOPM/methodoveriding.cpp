#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void sound()
    {
        cout << " animal makes saound" << endl;
    }
};
class Cat:public Animal

{
public:
    void sound()
    {
        cout << " says meow  meow" << endl;
    }
};
class Dog:public Animal
{
public:
    void sound()
    {
        cout << " says growl growl" << endl;
    }
};
int main()
{
    Animal* a;
    a = new Cat();
    a->sound;
    a = new Dog();
    a->sound;
    return 0;
}


//something wrong 