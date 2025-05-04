#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int v[3];
    int ans = 0;

    cin >> n;
    cin >> v[0] >> v[1] >> v[2];

    sort(v, v + 3);

    if (n >= v[0]) {
        n -= v[0];
        ans++;
    }
    if (n >= v[1]) {
        n -= v[1];
        ans++;
    }
    if (n >= v[2]) {
        n -= v[2];
        ans++;
    }

    cout << ans << endl;

    return 0;

}
