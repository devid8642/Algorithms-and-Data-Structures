#include <iostream>

using namespace std;

int main() {
  int n = 1, c = 0;
  float s = 0;
  
  while (n != 0) {
    cout << "Digite um número (0 para parar): ";
    cin >> n;
    
    if (n % 2 == 0 && n != 0) {
      s += n;
      c++;
    }

  }

  cout << "A média dos números pares vale: " << s/c << endl;

  return 0;

}
