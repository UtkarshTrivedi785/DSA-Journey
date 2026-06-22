#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
int upper = 0, lower = 0;
 for (char c : s) {
 if (c >= 'A' && c <= 'Z')
            upper++;
else
            lower++;
    }
if (upper > lower) {
    for (char &c : s) {
     if (c >= 'a' && c <= 'z')
                c = c - 32;
        }
    } else {
    for (char &c : s) {
    if (c >= 'A' && c <= 'Z')
                c = c + 32;
        }
    }
    cout << s;
    return 0;
}