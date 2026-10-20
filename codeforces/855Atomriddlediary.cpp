#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);

    int n;
    cin >> n;

    map<string, bool> seen;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;

        if (seen[name] == true)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
            seen[name] =true;
        }
    }
    return 0;
}