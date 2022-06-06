#include <iostream>

using namespace std;

int main() {
    int n;
    int k = 1;

    cin >> n;

    while (true) {
        int impar = 2*k + 1;

        if (impar > n)
            break;
        else if (impar % 3 == 0)
            cout << impar << endl;

        k++;
    }

    return 0;

}
