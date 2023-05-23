#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

// https://polygon.codeforces.com/p2J9epH/liaoli/pirata-ou-capita
 
bool containsword(string s, string word) {
    int counter = 0;
    for (auto c : s) {
        if (c == word[counter]) counter++;
        if (counter == word.size()) return true;
    }
    return false;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    map<char, char> m;
    string s; cin >> s;
    int counter = 0;
    for (char i = 'a'; i <= 'z'; i++) {
        m[s[counter]] = i;
        counter++;
    }
    
    string a; cin >> a;
    string original = "";
    for (auto c : a) {
        original += m[c];
    }
    
    if (containsword(original, "pirata") && containsword(original, "capita")) cout << "adulterada" << '\n';
    else if (containsword(original, "pirata")) cout << "falsa" << '\n';
    else if (containsword(original, "capita")) cout << "original" << '\n';
    else cout << "quemestaai?" << '\n';
 
    return 0;
}