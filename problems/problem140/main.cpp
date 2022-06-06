#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 2; i <= n; i++) {
        bool ctl = true;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0 && j != 1 && j != i)
                ctl = false;
        }

        if (ctl)
            cout << i << endl;
    }

    return 0;

}
