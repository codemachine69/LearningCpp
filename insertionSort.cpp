#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[20], n;
    cout << "Enter size of array" << endl;
    cin >> n;
    cout << "ENter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int hole = i;
        while (hole > 0 && arr[hole - 1] > temp)
        {
            arr[hole] = arr[hole - 1];
            hole--;
        }
        arr[hole] = temp;
    }
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}