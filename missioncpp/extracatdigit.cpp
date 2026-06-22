#include <iostream>
using namespace std;
int main()
{
    int digit , x;
    cin>>x ;
    while(x>0)
{
     digit =x%10;
    
    x=x/10;
}
cout<<digit<<" "  ;

return 0;
}