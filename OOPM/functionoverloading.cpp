#include <iostream>
#include <string>

using namespace std;
class numberPrinter
{
public:
    void Print(integer i)
    {
        cout << " Printing integer " << endl;
    }
    void Print(double d)
    {
        cout << " Printing  " << endl;
    }

} void Print(string s)
{
    cout << " Printing string " << endl;
};
int main()
{
    Printer p;
    p.print(10);
    p.print(2.4);
    p.print(" ghfghtfgt");

    return 0;
}

