#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int flag = 1 
    string result = "";
    for (int i =0;i<s.length();i++)
    {
        if (s[i]== 'W' && s[i+1]== 'U' && s[i+2]== 'B' )
        {
            i+=2;

        }
    }

    cout << result;
    return 0;
}
