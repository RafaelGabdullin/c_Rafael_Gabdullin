#include <iostream>
#include <time.h>

using namespace std;

void printArray(int *array, int n)
{
    for (int i = 0; i < n; ++i)
        std::cout << array[i] << " ";
}

void quickSort(int *array, int low, int high, int *counter)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        *counter += 1;

        while (array[i] < pivot)
            i++;

        while (array[j] > pivot)
            j--;
        
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(array, low, j, counter);
    if (i < high)
        quickSort(array, i, high, counter);
}

int main()
{
    int counter = 0;
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    cout << "Before Quick Sort : ";
    printArray(array, n);
    cout << endl;

    clock_t start = clock();
    quickSort(array, 0, n, &counter);
    clock_t end = clock();

    cout << " After Quick Sort : ";

    printArray(array, n);

    cout << endl;
    cout << (end * 1.000000 / CLOCKS_PER_SEC) - (start * 1.000000 / CLOCKS_PER_SEC) / CLOCKS_PER_SEC * 1.000000;
    cout << endl;
    cout << counter;

    return (0);
}