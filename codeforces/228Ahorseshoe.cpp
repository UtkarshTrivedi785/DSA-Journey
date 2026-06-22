/*#include <iostream>
using namespace std;
int main()
{
    int shoearr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> shoearr[i];
    }
 int maxcolor=1;
    for (int i = 0; i < 4; i++)
    {
       int counter = 1;
        for (int j = i + 1; j < 4; j++)
        {
            if (shoearr[i] == shoearr[j])
            
                counter++;
            
        }
        if(counter>maxcolor){
            maxcolor=counter;
        }
    }
    cout << maxcolor;
    return 0;
}*/

//(alternate short code)?
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    set<char> st(s.begin() , s.end());
    cout<<4-st.size();
    return 0;
}

 

