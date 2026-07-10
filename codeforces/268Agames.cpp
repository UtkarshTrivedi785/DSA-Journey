#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> teams(n);
    for (int i = 0; i < n; i++)
    {

        cin >> teams[i].first >> teams[i].second;
    }
    int counter = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i != j && teams[i].first == teams[j].second)

                counter++;
        }
    }
    cout << counter;
    return 0;
}
