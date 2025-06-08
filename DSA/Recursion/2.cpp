#include <iostream>
using namespace std;

/*
// this is the sagmentation fail, stack overflow, run infiinite times mem full
void print(){
    cout << "Susie";
    print();
}
*/
/*
void print(int a, int b){
    cout << "Base Case hit!";

    // Base case to breake the loop when it meets
    if (a >= b) return;

    cout << "Susie" << endl;
    print(a + 1, b);   // Recursion
} // time and space complexity is O(n)
*/
/*
void print(int a, int b){
    cout << a << endl;
    if (a >= b)
    {
        cout << "Base case";
        return;
    };

    print(a + 1, b);
}
*/
// back tracking print 1 to n without i++
/*
void print(int a){
    if (a < 1)
    {
        cout  << "Base case" << endl;
        return;
    }
    print(a - 1);
    cout << a << " ";
}
*/

void print(int a){
    if (a < 1)
    {
        cout  << "Base case" << endl;
        return;
    }
    print(a - 1);
    cout << a << " ";
}

int main()
{
    print(10);
    return 0;
}
