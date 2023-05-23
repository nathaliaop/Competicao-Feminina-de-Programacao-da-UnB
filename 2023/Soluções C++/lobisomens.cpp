#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    // conta quantas pesssoas estão acusando um determinado índice
    // de sempre mentir
    map<int, int> mentira;
    
    for (int i = 0; i < n; i++) {
        int q, x; cin >> q >> x;
        // se a acusação for do tipo 2 (o entrevistado está acusando
        // a pessoa de índice x de sempre mentir)
        if (q == 2) mentira[x]++;
    }
    
    int ans = -1;
    for (auto [key, value] : mentira) {
        // se houver mais de duas pessoas acusando esse índice,
        // esse é o índice do lobisomem
        if (value >= 2) ans = key;
    }
    
    cout << ans << '\n';
 
    return 0;
}