#include <iostream>

using namespace std;

int main() {
  float s = 0;
  
  for (int i = 50; i >= 1; i -= 2) {
    cout << i << endl;
    s += i;
  }

  cout << "A média dos números mostrados vale: " << s/25 << endl;

  return 0;

}
