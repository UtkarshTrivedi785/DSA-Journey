#include <iostream>
#include <set>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<int> doable_levels;
    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int levelX;
        cin >> levelX;
        doable_levels.insert(levelX);
    }
    int q;
    cin >> q ;
        for (int i=0;i<q;i++)
        {
         int levelY;
         cin>> levelY;
          doable_levels.insert(levelY);
        }
        if(doable_levels.size()==n)
        {
            cout<< "I become the guy."<<endl;
        }
        else
        {
             cout<< "Oh, my keyboard!" <<endl;
        }
        return  0;

}