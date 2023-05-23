#include <bits/stdc++.h> 
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    while(n--) {
        string s; cin >> s;
        cout << ((s.substr(0, 7) == "AAAAAAB") ? "Sim\n" : "Nao\n");
    }
 
    return 0;
}