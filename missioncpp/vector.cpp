#include <iostream>
#include <vector>
using namespace std ;

int main(){
 
    vector<int> num ;
    num.push_back(10);
    num.push_back(20);
    num.push_back(30);
    num.push_back(40);

    for(int i;i<=num.size(); i++)
    {
        cout << "number ;" <<num[i] <<" ";

    }

    cout <<endl;

    //removing 
    num.pop_back();

    //renge based 
    for(int val: num){
    cout<< val <<" ";
    }
    return 0;

}