#include <iostream>
#include <vector>
using namespace std;

// single rotate
void rotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}

// multiple rotate
void rotateByPlaces1(int arr[], int n, int placeNo)
{
    int place = placeNo % n;
    int temp[place];                // space O(space)
    for (int i = 0; i < place; i++) // time O(place)
    {
        temp[i] = arr[i];
    }

    for (int i = place; i < n; i++) // time O(n - place)
    {
        arr[i - place] = arr[i];
    }
    for (int i = n - place; i < n; i++) // time O(place)
    {
        arr[i] = temp[i - (n - place)];
        // i is increasing by 1 in each time
        // loop runs but the n and places are constant so they r not gonna
        // catch up with that +1 in i
    }
    /*
        time = O(place) + O(n - place) + O(place) = O(n + place)
        space = O(space) 
    */

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void rotateByPlaces2(int arr[], int n, int placeNo)
{
    
}



int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    rotateByPlaces2(arr, 9, 4);

    return 0;
}