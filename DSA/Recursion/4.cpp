#include <iostream>
using namespace std;

/* Reversing an array
void revert(int i, int n, int arr[])
{
    if (i >= n / 2){
        for (int i =  0; i < 5; i++) cout << arr[i];
         return;
    }

    swap(arr[i], arr[n - i - 1]);
    revert(i + 1, n, arr);
    return;
}
*/

//Palendromme
bool p(string word, int i = 0)
{
    if (i >= word.length() / 2)
        return true;

    if (word[i] != word[word.length() - i - 1])
    {
        return false;
    };
    return true;
}

int main()
{
    string word = "weew";
    cout << p(word);
    return 0;
}