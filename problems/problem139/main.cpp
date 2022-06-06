#include <iostream>

using namespace std;

int main() {
    int n; int ans = 0;
    string s;

    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            ans++;
    }

    cout << ans << endl;

    return 0;

}
