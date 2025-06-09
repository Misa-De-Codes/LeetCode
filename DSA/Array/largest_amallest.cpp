#include <iostream>
using namespace std;

/*
void func(int arr[])
{
    int x = -1;
    cout << "x: " << x << endl;
    for (int i = 0; i < 5; i++)
    {
        if (x < arr[i])
        {
            x = arr[i];
        }
    };
    cout << "largest: " << x << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    };
};
*/

//  Second leargest assuming only +ve values
#include <climits>

void smallest(int arr[], int size)
{
    int smallest = arr[0];
    int secondSmallset = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallset = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallset && arr[i] > smallest)
        {
            secondSmallset = arr[i];
        }
    }

    cout << "smallest: " << smallest << endl
         << "Second smallest: " << secondSmallset << endl;
};

// Largest no in an array
void largest(int arr[], int size)
{
    int largest = arr[0];
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "largest: " << largest << endl
         << "Second Largest: " << secondLargest << endl;
};


int main()
{
    int arr1[7] = {10, 10, 43, 25, 7, 43, 18};
    int arr2[10] = {
        2,
        -43,
        54,
        2,
        -34,
        232,
        -434,
        43,
        55,
        -9};
  
    smallest(arr2, 10);
    largest(arr2, 10);
    return 0;
}