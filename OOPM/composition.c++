#include <iostream>
using namespace std;
class Engine
{
public:
    Engine()
    {
        cout << " -> Engine is created" << endl;
    }
    ~Engine()
    {
        cout << " -> Enggine is destroyed" << endl;
    }
};

class Car
{
    Engine engine;

public:
    Car()
    {
        cout << " Car is created" << endl;
    }
    ~Car()
    {
        cout << " Car is desteroyed" << endl;
    }
};
int main()
{
    cout<<"......Creatting a CAr......... "<<endl;
    {
        Car car;
    }
    cout<<"......car is destroying........"<<endl;
    

    return 0;
}