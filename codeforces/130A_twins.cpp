#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> coins_type;
    for (int i = 0; i < n; i++)
    {
        int coin;
        cin >> coin;

        coins_type.push_back(coin);
    }
    sort(coins_type.rbegin(), coins_type.rend());
    int counter = 0;

    int coin_sum = accumulate(coins_type.begin(), coins_type.end(), 0);
    int more_than_half = coin_sum / 2;
    int required_Sum = 0;
    for (int Coin : coins_type)
    {
        required_Sum += Coin;
        counter++;

        if (required_Sum > more_than_half)
        {
            break;
        }
    }
    cout << counter;
    return 0;
}