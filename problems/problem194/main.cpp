#include <iostream>

using namespace std;

int main() {
    string n1, n2, n3;
    int ans = 0;

    cin >> n1 >> n2 >> n3;

    int x1 = n1[(int)n1.size() - 1] - '0';
    int x2 = n2[(int)n2.size() - 1] - '0';
    int x3 = n3[(int)n3.size() - 1] - '0';

    if (x1 % 2 == 0 || x1 == 5)
        ans++;
    if (x2 % 2 == 0 || x2 == 5)
        ans++;
    if (x3 % 2 == 0 || x3 == 5)
        ans++;

    cout << ans << endl;

    return 0;

}
