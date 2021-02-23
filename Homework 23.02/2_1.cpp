#include <bits/stdc++.h>

using namespace std;

int sum(int * a, int size){
    int t = 0;
    for (int i = 0; i < size; i++){
        t = t + a[i];
    }
    return t;
}


int main() {
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++){
        cin >> a[i];
    }
    cout << sum(a ,size) << endl;
}