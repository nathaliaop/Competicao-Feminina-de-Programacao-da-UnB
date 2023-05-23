#include <bits/stdc++.h>
 
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m; cin >> n >> m;
    char grid[n][m];
    
    for (int i = 0; i < n; i+=2) {
        for (int j = 0; j < m; j++) {
            grid[i][j] = '#';
        }
    }
    
    bool flag = true;
    for (int i = 1; i < n; i+=2) {
        for (int j = 0; j < m; j++) {
            grid[i][j] = '.';
        }
        if (flag) grid[i][m - 1] = '#';
        else grid[i][0] = '#';
        flag = !flag;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j];
        }
        cout << '\n';
    }
    
    return 0;
}