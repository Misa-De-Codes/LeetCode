/* 
    using namespace std;   
    { provides a soln for preventing naming conflicts in large projects, 
    each entity needs a unique name. 
    a namespace allows for identically named entities as long as the namespaces are diffrent.}
*/

#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main() {

    int x = 0;

    std::cout << x << " ";
    std::cout << first::x << " ";
    std::cout << second::x ;

    return 0;
}