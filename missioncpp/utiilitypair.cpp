#include <iostream>
#include <utility>
 using namespace std;

 int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //accessing elements
    pair<int ,string>  p1 ={1, "target"};
    cout<< "ID: "<<p1.first<< " , Name :" <<p1.second ;


    //updating elements
     
p1.first =3 ;
p1.second = " codeforces 1200++" ;

//arrays of pairs 

pair<int ,int > coordinates[3];
coordinates[1]= {30,40};
 cout << coordinates;

 return 0 ;
 }
     

