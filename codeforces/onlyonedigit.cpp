#include <iostream>
using namespace std;
int main()
{
    int y, t;

    cin >> t;
    while (t--)
    {
        int x;

        cin >> x;

        if (x >= 0 && x < 10)
        {

            y = x;
        }

        else

        {
            int smallest = 9;
            while (x > 0)
            {

                int digit = x % 10;
                if (digit < smallest)
                    smallest = digit;

                x = x / 10;
            }
            y = smallest;
        }
        cout << y << endl;
    }

    return 0;
}
