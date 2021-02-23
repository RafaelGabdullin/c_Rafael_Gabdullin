#include <bits/stdc++.h>

using namespace std;

int power(int x, int p){
        int t = 1;
    for(int i = 0; i < p; i++){
        t = t * x;
    }
    return t;

}
int main() {
    int x, p;
    cin >> x >> p;
    cout << power(x,p) << endl; 
}