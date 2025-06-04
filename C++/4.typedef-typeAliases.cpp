/*
typedef - reserved keyword used to create an aditional name (alias) for another data type
          New identifier for an existing type Helps with code readability and reduces typos 
          Using when there is a clear benefit
          Replaced with 'using' ( works better w/ templates)
*/

#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){
//   pairlist_t pairlist;

    text_t firstName = "Musa";
    number_t age = 20;
    

    std::cout << "Name: " << firstName << '\n' << "Age: " << age;
    return 0;
}