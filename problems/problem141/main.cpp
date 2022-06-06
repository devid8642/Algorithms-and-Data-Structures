#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, a, b;
    int ans = 0;

    cin >> s;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        string n;
        int sum = 0;

        n = to_string(i);
        
        for (int j = 0; j < n.size(); j++)
            sum += n[j] - '0';

        if (sum == s)
            ans++;
    }

    cout << ans << endl;

    return 0;

}
