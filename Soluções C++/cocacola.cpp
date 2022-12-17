#include <bits/stdc++.h>

using namespace std;

#define PI acos(-1)

// https://codeforces.com/problemset/problem/667/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    double d, h, v, e; cin >> d >> h >> v >> e;
    double r = d / 2;
    
    double bebo_altura = v / (PI * r * r);
    
    if (bebo_altura <= e) cout << "NO\n";
    else {
        cout << "YES\n";
        cout << h / (bebo_altura - e) << '\n';
    }

    return 0;
}
