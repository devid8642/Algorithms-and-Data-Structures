#include <iostream>

using namespace std;

int main() {
  int num;
  float money, time;
  
  // MENU
  cout << "--------------CLARA's DESIGN-------------" << endl;
  cout << "[1] - Diretor de Criação" << endl;
  cout << "[2] - Designer Sênior" << endl;
  cout << "[3] - Designer Freelancer" << endl;
  cout << "[4] - Designer Júnior" << endl;
  cout << "[5] - Arte-finalista" << endl;

  cout << "Qual o id correspondente ao seu cargo? ";
  cin >> num;
  cout << "Quantas horas trabalhadas? ";
  cin >> time;

  if (num == 1) {
    money = time*200.0;
    cout << "Seu salário é: R$" << money << endl;
  }
  else if (num == 2) {
    money = time*150.0;
    cout << "Seu salário é: R$" << money << endl;
  }
  else if (num == 3) {
    money = time*100.0;
    cout << "Seu salário é: R$" << money << endl;
  }
  else if (num == 4) {
    money = time*85.70;
    cout << "Seu salário é: R$" << money << endl;
  }
  else if (num == 5) {
    money = time*172.0;
    cout << "Seu salário é: R$" << money << endl;
  }
  else 
    cout << "ID INVÁLIDO!";

  return 0;

}
