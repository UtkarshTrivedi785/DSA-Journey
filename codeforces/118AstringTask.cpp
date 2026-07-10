#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;

    cin >> s;
    string result = "";

    for (char c : s)
        

    {
        char check = tolower(c);
        if (check != 'a' && check != 'e' && check != 'i' && check != 'o' && check != 'u' && check != 'y')
        {
            result += '.';
            result += check;
        }
    }
    cout << result;
    return 0;
}