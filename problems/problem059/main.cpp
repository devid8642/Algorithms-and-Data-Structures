#include <iostream>

using namespace std;

int main() {
  float temp;

  cout << "Digite a temperatura atual (em celsius): ";
  cin >> temp;

  if (temp <= 15.0)
    cout << "Está muito frio!";
  else if (temp <= 23.0)
    cout << "Está frio!";
  else if (temp <= 26.0)
    cout << "Está agradável.";
  else if (temp <= 30)
    cout << "Está calor.";
  else if (temp >= 31)
    cout << "Está muito quente!";

  return 0;

}
