/*
Input elements and delete the duplicate of  an array
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter n : ";
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //[1,4,3,4,1]
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int j = i; i < n - 1; i++)
                {
                    arr[j] = arr[j + 1];
                }
                n--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}