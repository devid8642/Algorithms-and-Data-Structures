#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, z;

    cin >> x >> y >> z;
    
    if (x + y < z)
        cout << 1 << endl;
    else if (x < y && y < z)
        cout << 2 << endl;
    else if (x < y && y == z)
        cout << 2 << endl;
    else if (y < z && x == y)
        cout << 2 << endl;
    else
        cout << 3 << endl;

    return 0;

}
