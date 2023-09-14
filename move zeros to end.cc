#include <iostream>
using namespace std;
void move(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                    swap(arr[i], arr[j]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[] = {2, 3, 4, 0, 4, 0, 5};
    move(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}