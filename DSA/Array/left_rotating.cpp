#include <iostream>

using namespace std;

// single rotate
void rotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n-1] = temp;

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}
//multiple rotate
void rotateByPlaces(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        
    }
    
}




int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    rotate(arr, 9);

    return 0;
}