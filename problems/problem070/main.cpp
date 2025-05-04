#include <iostream>

using namespace std;

int main() {
  int n;
  float m, s_media = 0;

  cout << "Quantidade de alunos: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cout << "Informe a média " << i << ": ";
    cin >> m;

    s_media += m;

  }

  cout << "A média da turma foi: " << s_media/n << endl;

  return 0;

}
