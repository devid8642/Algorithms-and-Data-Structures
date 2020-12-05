#include <iostream>

using namespace std;

int main() {
  float num;

  cout << "Digite um número: ";
  cin >> num;

  cout << "TABUADA DA ADIÇÃO" << endl;

  // ADIÇÃO
  for (int i = 0; i <= 10; i++)
    cout << num << " + " << i << " = " << num+i << endl;

  cout << "TABUADA DA SUBTRAÇÃO" << endl;

  // SUBTRAÇÃO
  for (int i = 0; i <= 10; i++)
    cout << num << " - " << i << " = " << num-i << endl;

  cout << "TABUADA DA MULTIPLICAÇÃO" << endl;

  // MULTIPLICAÇÃO
  for (int i = 0; i <= 10; i++)
    cout << num << " x " << i << " = " << num*i << endl;

  cout << "TABUADA DA DIVISÃO" << endl;

  // DIVISÃO
  for (int i = 1; i <= 10; i++)
    cout << num << " / " << i << " = " << num/i << endl;


  return 0;

}
