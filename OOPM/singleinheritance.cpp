#include <iostream>
using namespace std ;
class Animal
{
    public:
    void eat()
    {
        cout<<"Animal is eating :"<<endl;

    }

};

class Dog : public Animal
{
    public:
    void bark()
    {
        cout<<"DDog is barking and grouling "<<endl;

    }
};
int main()
{
    Dog d;
    d.eat();
    d.bark();
    Animal a;
    a.eat();
    return 0;
}
