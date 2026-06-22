#include <iostream>
#include <set>
using namespace std;
int main()
{
int year;
cin >> y;
while (true)
 {
     year++;
        int temp= y;
      set<int> digits;

    while (temp > 0)
        {
         int digit = temp % 10;
     digits.insert(digit);
            temp = temp / 10;
     }
     if  (digits.size() == 4)
            break;
  }
  cout << year;
    return 0;
}