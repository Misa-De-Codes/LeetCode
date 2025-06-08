#include <iostream>
using namespace std;

pair<int, pair<int, int>> function (){

    pair<int, pair<int, int>>x ={2, {4,5}};

    return x;
}


int main()
{
    auto x = function();
    
    cout << x.first << " " << x.second.first << x.second.second ;

    return 0;
}