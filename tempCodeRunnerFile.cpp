#include <iostream>
#include <utility>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();

    // 1. Declare the vector OUTSIDE the loop using the fixed size 'n'
    vector<pair<string, string>> treeLeaves(n);
 
    // 2. Use a standard for-loop so 'n' stays unchanged for later use
    for(int i = 0; i < n; i++) 
    {
        getline(cin, treeLeaves[i].first);
        getline(cin, treeLeaves[i].second);
    }

    // 3. Comparison logic loops through the entire populated vector
    int counter = 0;
    for(int i = 0; i < n; i++) 
    {
        if(treeLeaves[i].first == treeLeaves[i].second) 
        {
            counter++;
        }
    }

    cout << counter << "\n";

    return 0;
}