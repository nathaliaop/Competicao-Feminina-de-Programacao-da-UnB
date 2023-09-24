#include <bits/stdc++.h>
 
using namespace std;
 
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  // ler a altura do armário
  int h; cin >> h;
  string ans;

  // pedir para Mochi testar a altura 1
  cout << "1\n";
  cout.flush();

  // ler a resposta de Mochi
  cin >> ans;

  // responder qual é a altura máxima da qual o copo pode ser jogado sem quebrar
  if (ans == "Quebrou") cout << "! 0\n";
  else cout << "! 1\n";
 
  return 0;
}
