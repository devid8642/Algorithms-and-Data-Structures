#include <iostream>

using namespace std;

int main() {
    int v[3];

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            int x;

            cin >> x;

            sum += x;
        }
        v[i] = sum;
    }

    for (int i = 0; i < 3; i++)
        cout << "Linha " << i << ": " << v[i] << endl;

    return 0;

}
