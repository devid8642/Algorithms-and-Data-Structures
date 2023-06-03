#include <iostream>

using namespace std;

int main() {
  float l1, l2, l3;

  cout << "Digite a medida do primeiro segmento (em cm): ";
  cin >> l1;
  cout << "Digite a medida do segundo segmento (em cm): ";
  cin >> l2;
  cout << "Digite a medida do terceito segmento (em cm): ";
  cin >> l3;

  if (l1 < l2+l3 && l2 < l1+l3 && l3 < l1+l2) {
    cout << "De fato é possível formar um triângulo com esses segmentos." << endl;

    if (l1 == l2 && l2 == l3)
      cout << "E esse triângulo será equilátero.";
    else if (l1 != l2 && l2 != l3 && l1 != l3)
      cout << "E esse trinângulo será escaleno.";
    else
      cout << "E esse trinângulo será isóceles.";
  }
  else {
    cout << "Não é possível formar um trinângulo com esses segmentos." << endl;
  }

  return 0;

}
