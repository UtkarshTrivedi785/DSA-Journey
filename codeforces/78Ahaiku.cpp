#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> haiku(3);

    for (int i = 0; i < 3; i++)
    {
        getline(cin, haiku[i]);
    }
    vector<int> expected_counts = {5, 7, 5};
    bool is_haiku = true;

    for (int i = 0; i < haiku.size(); i++)
    {

        int syllableCounter = 0;
        for (char check : haiku[i])
        {

            if (check == 'a' || check == 'e' || check == 'i' || check == 'o' || check == 'u')
            {
                syllableCounter++;
            }
        }

        if (syllableCounter != expected_counts[i])
        {
            is_haiku = false;
            break;
        }
    }
    if (is_haiku)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
    return 0;
}
