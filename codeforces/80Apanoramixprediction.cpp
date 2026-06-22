#include <iostream>
using namespace std;
bool primeNo(int x)
{
    if (x < 2)
        return false; // oh no //
    for (int i = 2; i * i <= x; i++)
    {
        /* code */
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n, m;
    cin >> n >> m;
    bool notPrime = false;
    for (int i = n + 1; i <= m; i++)
    {
        if (primeNo(i))
        {
            if (i == m)
                cout << "YES";
            else
                cout << "NO";
            break; // bhai log idher break chook gaya tha //

            notPrime = true;
        }
    }
    if (!notPrime)
    {
        /* code */
        cout << "NO";
    }

    return 0;
}