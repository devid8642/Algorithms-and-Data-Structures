#include <iostream>

using namespace std;

int main() {
  int n;
  float alt, s_alt = 0;

  cout << "Informe o número de jogadores: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cout << "Informe a altura do jogador " << i << ": ";
    cin >> alt;

    s_alt += alt;

  }
  
  cout << fixed;
  cout.precision(2);

  cout << "A média de altura desse time é: " << s_alt/n << endl;

  return 0;

}
