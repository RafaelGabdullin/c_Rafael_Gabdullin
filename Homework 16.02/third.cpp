#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, p;
    cin >> x;
    p = 1;
    int k = 0;
    while (p < x){
        k++;
        p = p * 2;
    }
    cout << k - 1  << endl;
}