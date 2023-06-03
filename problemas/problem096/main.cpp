#include <bits/stdc++.h>

using namespace std;

int main() {
    queue<int> fila;
    int k = 16;
    string ans = "oitavas";

    for (int i = 0; i < 16; i++) {
        int x;

        cin >> x;

        fila.push(x);
    }

    while (true) {
        int jog1 = fila.front();
        fila.pop();
        int jog2 = fila.front();
        fila.pop();

        if (jog1 == 1 && jog2 == 9 || jog1 == 9 && jog2 == 1) {
            cout << ans << endl;
            break;
        }
        else if (jog1 == 1 || jog2 == 1) {
            if (jog1 == 1)
                fila.push(jog1);
            else
                fila.push(jog2);
            k--;
        }
        else if (jog1 == 9 || jog2 == 9) {
            if (jog1 == 9)
                fila.push(jog1);
            else
                fila.push(jog2);
            k--;
        }
        else {
            fila.push(jog1);
            k--;
        }

        if (k == 8)
            ans = "quartas";
        else if (k == 4)
            ans = "semifinal";
        else if (k == 2)
            ans = "final";
    }

    return 0;

}
