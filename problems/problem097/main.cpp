#include <bits/stdc++.h>

using namespace std;

int main() {
    int r, f, c;
    
    cin >> r >> f >> c;
    
    if (f > 3*r || c < 95)
        cout << "diminuir" << endl;
    else if (f < 2*r && c > 97)
        cout << "aumentar" << endl;
    else
        cout << "manter" << endl;

    return 0;
}
