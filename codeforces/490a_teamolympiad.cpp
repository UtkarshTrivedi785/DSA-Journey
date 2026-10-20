#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> prog;
    vector<int> math;
    vector<int> pe;

    for (int i = 1; i <= n; i++)
    {
        int skill;
        cin >> skill;

        if (skill == 1)
        {
            prog.push_back(i);
        }

        else if (skill == 2)

        {
            /* code */
            math.push_back(i);
        }
        else if (skill == 3)

        {
            pe.push_back(i);
        }
    }
    int w = min({prog.size(), math.size(), pe.size()});
    cout << w << "\n";
    for (int i = 0; i < w; i++)
    {
        cout << prog[i] << " " << math[i] << " " << pe[i] << "\n";
    }
    return 0;
}
