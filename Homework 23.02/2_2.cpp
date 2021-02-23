#include <bits/stdc++.h>

using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int arr_1[n1], arr_2[n2], arr_3[n1 + n2];
    for (int i = 0; i < n1; i++) {
        cin >> arr_1[i];
        arr_3[i] = arr_1[i];
    }
    for (int i = n1; i < n1 + n2; i++){
        cin >> arr_2[i];
        arr_3[i] = arr_2[i];
    }
    for (int i = 0; i < n1 + n2; i++){
        cout << arr_3[i] << " " ;
    }
    cout << endl;
}