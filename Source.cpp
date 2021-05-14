#include <iostream>
#include <array>
#include <time.h>

using namespace std;

void Create(array<int, 100>& arr, int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;
}

void Print(array<int, 100>& arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int Max(array<int, 100>& arr, int n)
{
    int max;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            max = arr[i];
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0 && arr[i] > max)
        {
           max = arr[i];
        }
    }

    return max;
}

int main()
{
    srand((unsigned int)time(NULL));

    int n;
    cout << "Enter a size of array: "; cin >> n;

    array<int, 100> arr = { 0 };

    Create(arr, n);
    Print(arr, n);
    cout << " max = " << Max(arr, n)  << endl;

    return 0;
}