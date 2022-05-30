#include <iostream>

using namespace std;

int main() {
    double a; int id;

    cin >> a >> id;

    if (a >= 1.6 || id >= 18)
        cout << "Pode andar de montanha russa" << endl;
    else
        cout << "Nao pode andar de montanha russa" << endl;

    return 0;

}
