#include <iostream>
#include <string>
#include <map>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    map<string, string> ip_to_name;
    for (int i = 0; i < n; i++)
    {
        string name, server_ip;

        cin >> name >> server_ip;

        server_ip += ";";
        ip_to_name[server_ip] = name;
    }
    for (int i = 0; i < m; i++)
    {
        /* code */
        string command, server_ip;
        cin >> command >> server_ip;

        cout<<command<<' '<<server_ip<<" #"<<ip_to_name[server_ip]<<"\n";
    }
return 0;
}