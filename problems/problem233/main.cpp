#include <iostream>

using namespace std;

int main() {
    int d, a, n;
    int ans = 0;

    cin >> d >> a >> n;

    if (n == 1) {
        cout << 31 * d << endl;
        return 0;
    }

    if (n >= 16) {
        ans = d + 14 * a;
        cout << (32 - n)*ans << endl;
        return 0;
    }

    if (n < 16) {
        cout << (32 - n)*(d + (n - 1)*a) << endl;
        return 0;
    }

    return 0;


}
