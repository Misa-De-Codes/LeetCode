#include <iostream>
using namespace std;

bool checkSort(int arr[], int n)
{
    for (int i  = 1; i < n-1; i++)
    {
        if (arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}


int main()
{
    int arr3[7] = {1, 2, 3, 4, 5, 6, 8};
    cout << checkSort(arr3, 7);
    return 0;
}