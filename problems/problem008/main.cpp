#include <iostream>

using namespace std;

int main() {
  int n;
  int p = 0;
  int i = 0;

  for (int c = 0; c < 10; c++) {
    cout << "Digite um número: ";
    cin >> n;

    if (n % 2 == 0)
      p++;
    else
      i++;
  }

  cout << "Você digitou " << p << " números pares." << endl;
  cout << "Você digitou " << i << " números ímpares." << endl;

  return 0;

}
