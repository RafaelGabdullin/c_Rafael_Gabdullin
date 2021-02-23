#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c; 
    cin >> a >> b >> c;
    int d;
    d = b * b - 4 * a * c;
    double di;
    di = sqrt(d);
    if(di >= 1) {
        cout << "x1 = " <<  (-b + di) / 2 * a << "x2 = " << (-b - di) / 2 * a << endl;  
    }
    else if(di == 0) {
        cout << "x = " << (-b) / 2 * a << endl;
    }
    else {
        cout << "Нет решений!";
    }
}