#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {

        string r;
        cin >> r;

        int n = r.length();
        int answer = 0;

        // Step 1: Find first and last 's'
        int firstS = -1, lastS = -1;

        for (int i = 0; i < n; i++) {
            if (r[i] == 's') {
                if (firstS == -1)
                    firstS = i;
                lastS = i;
            }
        }

        // Case: No 's' at all → keep only one 'u'
        if (firstS == -1) {
            cout << n - 1 << "\n";
            continue;
        }

        // Step 2: All 'u' before first 's' are invalid
        for (int i = 0; i < firstS; i++) {
            if (r[i] == 'u')
                answer++;
        }

        // Step 3: All 'u' after last 's' are invalid
        for (int i = lastS + 1; i < n; i++) {
            if (r[i] == 'u')
                answer++;
        }

        // Step 4: Check between every two 's'
        for (int i = firstS; i < lastS; ) {

            if (r[i] == 's') {
                int j = i + 1;
                int uCount = 0;

                // count u's between two s
                while (j < n && r[j] == 'u') {
                    uCount++;
                    j++;
                }

                // if even number of u's → one must be converted
                if (j < n && uCount > 0 && uCount % 2 == 0)
                    answer++;

                i = j;
            }
            else {
                i++;
            }
        }

        cout << answer << "\n";
    }

    return 0;
}
