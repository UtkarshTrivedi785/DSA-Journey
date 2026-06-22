#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;          // uske paass 20 se 12 ka time hai
    int timeLeft = 240 - k; // itna bachh time  jatyaga
    // int timeRequired=0;
    int solvingTime = 0;
    int counter = 0;
    for (int i = 1; i <= n; i++)

    {
        solvingTime += 5 * i;
        if (solvingTime > timeLeft)
            break;
        counter++;
    }
    cout << counter;
    return 0;
}