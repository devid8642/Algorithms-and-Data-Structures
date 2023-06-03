#include <iostream>

using namespace std;

int main() {
  int n, s = 0;

  cout << "Digite um número: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
    s += i;

  cout << "A soma de todos os números de 1 ate " << n << " vale: " << s << endl;

  return 0;

}
