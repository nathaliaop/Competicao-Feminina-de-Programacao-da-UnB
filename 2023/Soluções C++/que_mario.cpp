#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    set<int> fases;
 
    int n; cin >> n;
    
    int p; cin >> p;
    for(int i=0; i<p; i++){
        int x; cin >> x; 
        fases.insert(x);
    }
 
    int q; cin >> q;
    for(int i=0; i<q; i++){
        int x; cin >> x;
        fases.insert(x);
    }
 
    cout << (fases.size() == n ? "Sou eu, Mario!" : "Que Mario?") << endl;
  
    return 0;
}