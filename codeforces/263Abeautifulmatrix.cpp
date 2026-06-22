#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t, n;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int x;
            cin >> x;

            if (x == 1)
            {

                n = abs(i - 3) + abs(j - 3);
            }
        }
    }
    cout << n;
    return 0;
}
