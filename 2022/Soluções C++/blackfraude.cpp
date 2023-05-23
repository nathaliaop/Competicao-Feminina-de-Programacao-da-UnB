#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e2+7;
const int MAX2 = 1e4+7;

int n, d;
int arr[MAX], dp[MAX][MAX2];

// https://polygon.codeforces.com/p6wYv3L/dudaholandah/black-fraude

int solve(int idx, int gastou) {
    
    if (idx >= n) return 0;
    
    if (dp[idx][gastou] != -1) return dp[idx][gastou];
    
    int pega = 0;
    if (gastou + arr[idx] <= d) pega = solve(idx + 2, gastou + arr[idx]) + 1;
    int npega = solve(idx + 1, gastou);
    
    
    return dp[idx][gastou] = max(pega, npega);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> d;
    
    memset(dp, -1, sizeof(dp));
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << solve(0, 0) << '\n';

    return 0;
}
