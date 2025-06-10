#include <iostream>
#include <vector>
using namespace std;

int removeDublicates(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n - 1; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

int main()
{
    int arr[] = {1, 1, 2, 3, 3, 7, 7, 7, 9, 9};

       for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
       }
    return 0;
}