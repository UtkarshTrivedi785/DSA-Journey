#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[n];
        }

        // ye absolute sum hai;
       for (int i = 0; i < n - 1; i++)
        {
            /* code */

            int absSum = abs(arr[i] - arr[i + 1]);
            vector<int> arr1(absSum);
        }
    
    return 0;
}