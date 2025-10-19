#include <iostream>

using namespace std;
int main()
{
    int numbers[] = {5, 1, 7, 3, 9, 6, 4, 8, 2};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}