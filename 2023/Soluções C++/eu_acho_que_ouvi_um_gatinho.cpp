#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        char flag = 'm', prev = 'm';
        bool ans = true;

        for (int i = 0; i < n; i++) {
            if (tolower(s[i]) == flag) {
                if (flag == 'm') {
                    flag = 'e';
                    prev = 'm';
                } else if (flag == 'e') {
                    flag = 'o';
                    prev = 'e';
                } else if (flag == 'o') {
                    flag = 'w';
                    prev = 'o';
                } else if (flag == 'w') {
                    flag = '*';
                    prev = 'w';
                }
            }

            else if (tolower(s[i]) != prev) ans = false;
        }
        
        if (flag != '*') ans = false;

        cout << (ans ? "YES\n" : "NO\n");
    }

    return 0;
}