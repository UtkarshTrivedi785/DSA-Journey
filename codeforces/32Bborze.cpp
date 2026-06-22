#include <iostream>
#include <string>
using namespace std;
int main()
{
  string s;
  cin >> s;
  string ans = "";
  for (int i = 0; i < s.length();)
  {
    if (s[i] == '.')
    {
      ans += "0";
      i++;
    }
    else if (s[i + 1] == '.')
      ans += "1";

    else
      ans += "2";
    
  }
    cout << ans;
  return 0;
}
