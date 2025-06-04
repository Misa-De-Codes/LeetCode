#include <iostream>

int main () {
    int students = 21;
    
 //   students = students + 1;
 //   students+=10;
 //   students++;  //for +1

    const int FOLL = students/=3;  // answer will be 6 the decimal part is gone as it's a int variable

    int remainder = students % 2;

    std::cout << students << "   " << FOLL << "  " << remainder;
    

    return 0;
}