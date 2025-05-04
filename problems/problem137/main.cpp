#include <iostream>

using namespace std;

int main() {
    int n;
    int ans = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;

        cin >> x;

        if (x == 0)
            ans++;
    }

    cout << ans << endl;

    return 0;

}
