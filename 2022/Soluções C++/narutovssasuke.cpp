#include <bits/stdc++.h>

using namespace std;

// https://polygon.codeforces.com/p5HD8FA/dudaholandah/sasuke-naruto

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int d, x1, d1, x2, d2; cin >> d >> x1 >> d1 >> x2 >> d2;
    
    double n = (d - d1) / (double)x1;
    double s = (d - d2) / (double)x2;
    
    if (s > n) cout << "Naruto\n";
    else if (n > s) cout << "Sasuke\n";
    else cout << "Empate\n";

    return 0;
}
