#include <iostream>

using namespace std;

int main() {
    int n;
    int tmp1; int tmp2;
    bool ctl = true;

    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            cin >> tmp1;
        else {
            cin >> tmp2;

            if (tmp1 > tmp2)
                ctl = false;
        }
    }

    if (ctl)
        cout << "Notas validas" << endl;
    else
        cout << "Notas invalidas" << endl;

    return 0;

}
