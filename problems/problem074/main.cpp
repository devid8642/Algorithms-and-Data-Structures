#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    int x, y, z;
    int tot = 0;

    cin >> a >> b >> c;
    cin >> x >> y >> z;

    if (a < x)
        tot += x - a;
    if (b < y)
        tot += y - b;
    if (c < z)
        tot += z - c;

    cout << tot << endl;

    return 0;

}
