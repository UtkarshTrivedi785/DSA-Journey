#include <iostream>
#include <string>
#include <set>
#include <cctype>

using namespace std;
int main()

{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
    string s;
    cin >> n >> s;
    for (char &c : s)
    {
        c = toupper(c);
    }

    set<char> unique_char(s.begin(), s.end());
    if (unique_char.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
