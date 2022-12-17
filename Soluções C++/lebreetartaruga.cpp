#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
const int MAX = 1e3+7;

// https://polygon.codeforces.com/p1PPvYt/liaoli/lebre-tartaruga
 
int n, m;
char grid[MAX][MAX];
bool visited_hare[MAX][MAX], visited_turtle[MAX][MAX];
int time_turtle, time_hare = 0;
 
int calculate_time_turtle(int i, int j, int total_time) {
    if (grid[i][j] == 'F') return total_time;
    if (grid[i][j] == 'P') return total_time + 2;
    
    return total_time + 1;
}
 
int calculate_time_hare(int i, int j, int total_time) {
    if (grid[i][j] == 'C') return total_time;
    if (grid[i][j] == 'A') return total_time + 2;
    
    return total_time + 1;
}
 
void dfs_turtle(int i, int j, int total_time) {
    visited_turtle[i][j] = true;
    
    if (grid[i][j] == '-') {
        time_turtle = total_time;
        return;
    }
    
    vector<pair<int, int>> pos = {
        {i + 1, j},
        {i - 1, j},
        {i, j + 1},
        {i, j - 1},
    };
    
    for (auto [it, jt] : pos) {
        if (!visited_turtle[it][jt]) dfs_turtle(it, jt, calculate_time_turtle(it, jt, total_time));
    }
}
 
void dfs_hare(int i, int j, int total_time) {
    visited_hare[i][j] = true;
    
    if (grid[i][j] == '-') {
        time_hare = total_time;
        return;
    }
    
    vector<pair<int, int>> pos = {
        {i + 1, j},
        {i - 1, j},
        {i, j + 1},
        {i, j - 1},
    };
    
    for (auto [it, jt] : pos) {
        if (!visited_hare[it][jt]) dfs_hare(it, jt, calculate_time_hare(it, jt, total_time));
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    pair<int, int> turtle, hare;
    
    for (int i = 0; i <= n + 1; i++) {
        for (int j = 0; j <= m + 1; j++) {
            grid[i][j] = '-';
        }
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'T') turtle = {i, j};
            if (grid[i][j] == 'L') hare = {i, j};
            if (grid[i][j] == '#') {
                visited_turtle[i][j] = true;
                visited_hare[i][j] = true;
            }
        }
    }
    
    dfs_turtle(turtle.first, turtle.second, 0);
    if (time_turtle != 0) cout << time_turtle << ' ';
    else cout << "-1 ";
    
    dfs_hare(hare.first, hare.second, 0);
    if (time_hare != 0) cout << time_hare << '\n';
    else cout << "-1\n";
 
    return 0;
}