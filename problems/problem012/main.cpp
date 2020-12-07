#include <iostream>

using namespace std;

int main() {
  int n, s = 0;

  cout << "Digite um número: ";
  cin >> n;

  for (int i = 1; i <= 20; i++)
    s += n*i;

  cout << "A soma vale: " << s << endl;

  return 0;

}
