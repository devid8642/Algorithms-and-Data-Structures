#include <iostream>

using namespace std;

int main() {
  int num, quant;
  float total = 0;
  string resp = "S";

  // MENU
  cout << "--------------CLARA's Café----------------" << endl;
  cout << "Escolha seu pedido!" << endl;
  cout << "[1] - Uma fatia de bolo 7,50 R$" << endl;
  cout << "[2] - Um xícara pequena de café 2,35 R$" << endl;
  cout << "[3] - Um copo grande de chá preto gelado 13,40 R$" << endl;
  cout << "[4] - Um conjunto de biscoitos amanteigados 15,00 R$" << endl;
  // FIM DO MENU
  
  while (resp[0] == 'S' || resp[0] == 's') {
    cout << "Qual o número do pedido? ";
    cin >> num;
    cout << "Qual a quantia desse pedido? ";
    cin >> quant;

    if (num == 1)
      total = total + (quant*7.5);
    else if (num == 2)
      total = total + (quant*2.35);
    else if (num == 3)
      total = total + (quant*13.40);
    else if (num == 4)
      total = total + (quant*15);
    else
      cout << "Pedido Inválido!" << endl;

    cout << "Você deseja outro fazer pedido [S/N]? ";
    cin >> resp;
  }
  
  cout << "O total da sua compra vale: R$" << total << endl;
  
  return 0;

}
