#include <bits/stdc++.h>

using namespace std;

void sort(int *data, int size)
{
    int j = 0;
    int tmp = 0;
    for (int i = 0; i < size; i++)
    {
        j = i;
        for (int k = i; k < size; k++)
        {
            if (data[j] > data[k])
            {
                j = k;
            }
        }
        tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;
    }
}

int main()
{
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
        cin >> a[i];
    
    sort(a, size);

    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}
