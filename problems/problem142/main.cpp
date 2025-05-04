#include <iostream>

using namespace std;

int main() {
    int n;
    int bus[15][15];

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> bus[i][j];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (bus[i][j] == 1) {
                if (bus[i + 1][j] != 1 && bus[i + 1][j] != 2)
                    bus[i + 1][j] = 2;
                if (bus[i - 1][j] != 1 && bus[i - 1][j] != 2)
                    bus[i - 1][j] = 2;

                if (bus[i][j + 1] != 1 && bus[i][j + 1] != 2)
                    bus[i][j + 1] = 2;
                if (bus[i][j - 1] != 1 && bus[i][j - 1] != 2)
                    bus[i][j - 1] = 2;

                if (bus[i - 1][j + 1] != 1 && bus[i - 1][j + 1] != 2)
                    bus[i - 1][j + 1] = 2;
                if (bus[i - 1][j - 1] != 1 && bus[i - 1][j - 1] != 2)
                    bus[i - 1][j - 1] = 2;

                if (bus[i + 1][j + 1] != 1 && bus[i + 1][j + 1] != 2)
                    bus[i + 1][j + 1] = 2;
                if (bus[i + 1][j - 1] != 1 && bus[i + 1][j - 1] != 2)
                    bus[i + 1][j - 1] = 2;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << bus[i][j] << ' ';
        cout << endl;
    }

    return 0;

}
