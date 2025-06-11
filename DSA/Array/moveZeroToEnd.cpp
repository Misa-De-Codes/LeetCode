#include <iostream>
using namespace std;

void moveZero(int arr[], int n)
{
    int j;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap( arr[i], arr[j]);
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}




int main()
{
    int arr[] = {1, 24, 0, 3, 0, 55, 10, 0, 5, 75, 4};

    moveZero(arr, 11);
    return 0;
}