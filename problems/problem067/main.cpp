#include <iostream>

using namespace std;

int main() {
  float num;

  cout << "Digite um número: ";
  cin >> num;
  
  cout << "TABUADA DA ADIÇÃO" << endl;

  for (int i = 1; i <= 10; i++)
    cout << num << " + " << i << " = " << num+i << endl;
  
  cout << "TABUADA DA SUBTRAÇÃO" << endl;

  for (int i = 1; i <= 10; i++)
    cout << num << " - " << i << " = " << num-i << endl;

  cout << "TABUADA DA MULTIPLICAÇÃO" << endl;

  for (int i = 1; i <= 10; i++)
    cout << num << " x " << i << " = " << num*i << endl;

  cout << "TABUADA DA DIVISÃO" << endl;

  for (int i = 1; i <= 10; i++)
    cout << num << " / " << i << " = " << num/i << endl;

  return 0;

}
