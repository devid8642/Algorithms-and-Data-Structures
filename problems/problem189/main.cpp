#include <iostream>

using namespace std;

int v[16];

int main() {
    int h, p, f, d;

    cin >> h >> p >> f >> d;

    v[h] = 1;
    v[p] = 2;
    v[f] = 3;

    int i = f;

    while (true) {
        if (v[i] == 1) {
            cout << 'S' << endl;
            return 0;
        }
        else if (v[i] == 2) {
            cout << 'N' << endl;
            return 0;
        }

        if (d == -1) {
            i--;
            if (i == -1)
                i = 15;
        }
        else {
            i++;
            if (i == 16)
                i = 0;
        }
    }

    return 0;

}
