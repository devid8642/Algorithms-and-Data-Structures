#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    cout << a - b << endl;

    if (a - b >= 18) {
        cout << "Pode tirar carteira" << endl;
        cout << a - b - 18 << endl;
    }
    else {
        cout << "Nao pode tirar carteira" << endl;
        cout << 18 - (a - b) << endl;
    }

    return 0;

}
