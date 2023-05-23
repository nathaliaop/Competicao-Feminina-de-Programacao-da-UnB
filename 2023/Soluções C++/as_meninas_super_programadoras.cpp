#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while (t--) {
        int c, d; cin >> c >> d;
        if (abs(c - d) % 2 == 1) {
            cout << -1 << '\n';
        } else if (c == 0 && d == 0) {
            cout << 0 << '\n';
        } else if (c == d) {
            cout << 1 << '\n';
        } else {
            cout << 2 << '\n';
        }
    }
 
    return 0;
}