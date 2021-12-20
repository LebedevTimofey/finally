#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 6;
    int arr[n] = { 5, 2, 4, 6, 1, 3 };
    int j, tmp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        tmp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
        {
            arr[j + 1] = arr[j];
            arr[j] = -1;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        arr[j + 1] = tmp;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}