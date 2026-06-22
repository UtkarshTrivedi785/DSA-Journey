#include <iostream>
using namespace std;
class Student
{
public:
    string name;
};
class Teacher
{

public:
    void teach(Student s)
    {

        cout << "Teaching  " << s.name << endl;
    }
};
int main()
{
    Student s;
    s.name= "utkarsh";

    Teacher t;
    t.teach(s);
    return 0;

}
