#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 2) {
        // Only two possibilities: add a[0] or subtract a[1]
        cout << max(a[0], -a[1]) << "\n";
        return;
    }

    long long sum_abs_others = 0;
    long long min_abs_val = 2e18; 

    // Look at all children from index 1 to n-1
    for (int i = 1; i < n; i++) {
        long long val = abs(a[i]);
        sum_abs_others += val;
        if (val < min_abs_val) {
            min_abs_val = val;
        }
    }

    // Option A: Leave a[0] behind.
    long long optionA = sum_abs_others;
    // Option B: Include a[0], but we must leave one child from a[1...n-1] behind.
    // We choose to leave the one with the smallest absolute value.
    long long optionB = a[0] + sum_abs_others - min_abs_val;

    cout << max(optionA, optionB) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}