#include <iostream>
using namespace std;
int main()
{
    int g, c, l;
    cin >> g >> c >> l;

    int max = g;

    if (c > max)
        max = c;
    else if (l > max)
        max = l;

    int min = g;
    if (c < min)
        min = c;
     if (l < min)
        min = l;

    if (max - min >= 10)
    {
        cout << "check again" << endl;
    }
    else
        cout << "final " << g+c+l-max-min << endl;
    return 0;
}