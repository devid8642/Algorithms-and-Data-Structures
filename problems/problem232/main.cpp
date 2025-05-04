#include <iostream>

using namespace std;

int v(string c, char n) {
    if (c[0] == 'A') {
        if (c[1] == n)
            return 14;
        else
            return 10;
    }
    else if (c[0] == 'J') {
        if (c[1] == n)
            return 15;
        else
            return 11;
    }
    else if (c[0] == 'Q') {
        if (c[1] == n)
            return 16;
        else
            return 12;
    }
    else {
        if (c[1] == n)
            return 17;
        else
            return 13;
    }
}

int main() {
    string c1, c2, c3, c4, c5, c6, c7;
    int p1 = 0; int p2 = 0;
    string l[3]; string e[3];
    
    cin >> c1;

    for (int i = 0; i < 3; i++)
        cin >> l[i];

    for (int i = 0; i < 3; i++)
        cin >> e[i];

    char naipe = c1[1];

    for (int i = 0; i < 3; i++)
        p1 += v(l[i], naipe);
    for (int i = 0; i < 3; i++)
        p2 += v(e[i], naipe);

    if (p1 > p2)
        cout << "Luana" << endl;
    else if (p2 > p1)
        cout << "Edu" << endl;
    else
        cout << "empate" << endl;

    return 0;

}
