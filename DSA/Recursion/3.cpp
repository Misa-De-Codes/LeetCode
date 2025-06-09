#include <iostream>
using namespace std;

// Sum if the first n numbers
/*void sum(int i, int total = 0)
{
    if (i < 1){
        cout << "Hellow susie!  "<< total;
        return;
    }
    sum(i - 1, total + i);
}
*/
/* Also return the sum
int sum(int i)
{
    if (i == 0){
        return 0;
    }
    return i + sum(i - 1);

}
    */


int sum(int i)
{
    if (i <= 0){
        return 0;
    }
    return i + sum(i - 1);

}


int main()
{
    cout << sum(-6);
    return 0;
}