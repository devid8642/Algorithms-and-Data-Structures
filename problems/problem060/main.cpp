#include <iostream>

using namespace std;

int main() {
  float break_quant, danif_quant, total;

  cout << "Quantas peças foram QUEBRADAS? ";
  cin >> break_quant;
  cout << "Quantas peças foram DANIFICADAS? ";
  cin >> danif_quant;

  total = break_quant*100 + danif_quant*55.60;

  if (total >= 1000.0 && total < 1500.0){
    total = total - (0.2*total);
    cout << "O valor total é: R$" << total << endl;
  }
  else if (total >= 1500.0 && total < 2000.0) {
    total = total - (0.3*total);
    cout << "O valor total é: R$" << total << endl;
  }
  else if (total >= 2000.0) {
    total = total - (3.5*total);
    cout << "O valor total vale: R$" << total << endl;
  }
  else {
    total = total + (0.8*total);
    cout << "O valor total é: R$" << total << endl;
  }

  return 0;

}
