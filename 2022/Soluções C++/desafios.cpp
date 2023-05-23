#include <bits/stdc++.h>

using namespace std;

// https://codeforces.com/problemset/problem/1679/B

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, q; cin >> n >> q;
    pair<int, int> arr[n];
    long long sum = 0;
    
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        arr[i] = {num, -1};
        sum += num;
    }
    
    int val = 0;
    int lastquery2 = -1;
    for (int i = 0; i < q; i++) {
        int op; cin >> op;
        if (op == 1) {
            int idx, x; cin >> idx >> x;
            if (arr[idx - 1].second < lastquery2) sum += x - val;
            else sum += x - arr[idx - 1].first;
            arr[idx - 1] = {x, i};
        }
        else {
            int x; cin >> x;
            sum = n * x;
            lastquery2 = i;
            val = x;
        }
        
        cout << sum << '\n';
    }

    return 0;
}
