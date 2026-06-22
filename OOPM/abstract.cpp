q   #include <iostream>
using namespace std;
class Shape
{
public:
    virtual void draw() = 0;

        void info()
    {
        cout << "I can draw shapes" << endl;
    }
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a Circle ◯" << endl;
    }
};
class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a rectangle " << endl;
    }
};  
int main()
{
    // shape s incorrect
    Shape* s1 = new Circle();

    Shape* s2 = new Rectangle();
    s1->draw();
    s2->draw();


    s1->info();
    s2->info();
    return 0;
}
