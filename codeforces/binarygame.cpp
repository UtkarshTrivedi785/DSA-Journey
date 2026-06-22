#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int arraySize;
        cin >> arraySize;

        vector<int> array(arraySize);
        for (int i = 0; i < arraySize; i++) {
            cin >> array[i];
        }

        int counter0 = 0;
        int counter1 = 0;

        for (int i = 0; i < array.size(); i++) {
            int x = array[i];
            if (x == 1) {
                counter1++;
            } else if (x == 0) {
                counter0++;
            }
        }

        
        if (counter0 <= counter1) {
            cout << "Alice\n";
        } else {
            cout << "Bob\n";
        }
    }

    return 0;
}                  
