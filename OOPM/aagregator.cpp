#include <iostream>
using namespace std;
class Department
{
public:
    string dept_name;
    Department(string name)
    {
        dept_name = name;
    }
};
class College
{

    Department* dept;

public:
    College(Department *d)
    {
        dept = d;
    }
        void show()
        {
            cout << "Department Name: " << dept->dept_name << endl;
        }
    }
;
int main()
{
   Department d("Computer Science");
    College c(&d);
    c.show();
    return 0;
}