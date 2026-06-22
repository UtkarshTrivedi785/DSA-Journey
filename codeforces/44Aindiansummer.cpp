#include <iostream>
#include <utility>
#include <string>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    vector<pair<string, string>> treeLeaves(n);
    for (int i = 0; i < n; i++)
    {
        cin >> treeLeaves[i].first >> treeLeaves[i].second;
    }

    // comparison ghjfh

    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        bool alreadyPicked = false;
        for (int j = 0; j < n; j++)
        {
            if (treeLeaves[i].first == treeLeaves[j].first && treeLeaves[i].second == treeLeaves[j].second)
            {
                bool alreadyPicked;
                break;
            }

            if (!alreadyPicked)
            {
                counter++;
            }
        }
    }
    cout << counter;

    return 0;
}