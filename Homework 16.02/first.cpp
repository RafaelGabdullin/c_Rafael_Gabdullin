#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int summ = 0;
    for( int i = 0; i < n; i++){
        int t;
        cin >> t;
        summ = summ + t;
    }
    cout << summ << endl;
}