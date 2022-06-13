#include <iostream>

using namespace std;

int main() {
    int p, d1, d2;

    cin >> p >> d1 >> d2;

    if ((d1 + d2) % 2 == 0) {
        if (p == 0)
            cout << 0  << endl;
        else
            cout << 1 << endl;
    }
    else {
        if (p == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;

}
