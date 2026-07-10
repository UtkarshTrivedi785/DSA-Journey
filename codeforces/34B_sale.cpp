#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> prises;
    for (int i = 1; i <= m; i++)

    {
        int prize ;
        cin>>prize;
       prises.push_back(prize);
    }
    sort(prises.begin(), prises.end());
    int money_total = 0;

    for (int i = 0; i < n; i++)

    {
        if (prises[i] > 0)
        {
            break;
        }

        else
        {
            money_total += abs(prises[i]);
        }
    }
    cout << money_total << endl;
    return 0;
}