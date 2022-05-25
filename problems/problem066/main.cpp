#include <iostream>

using namespace std;

int main() {
  int num;
  float result;

  cout << "Digite um número: ";
  cin >> num;
  result = num;

  for (int i = 1; i <= num; i++) {

    if (num % i == 0 && i != 1 && i != num) {
      cout << "Ele não é primo: " << result/2 << endl;
      return 0;
    }
    
  }

  cout << "Ele é primo: " << result*2 << endl; 

  return 0;

}
