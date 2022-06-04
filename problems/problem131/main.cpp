#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    int l = 0; int ans = 0;

    cin >> n;

    for (int i = 0; i < n.size(); i++) {
        int num = n[i] - '0';
        int c1 = 0; int c2 = 0;
        int tmp = l;

        while (tmp != num) {
            tmp++;
            c1++;
            if (tmp == 10)
                tmp = 0;
        }

        tmp = l;

        while (tmp != num) {
            tmp--;
            c2++;
            if (tmp == -1)
                tmp = 9;
        }

        if (c1 <= c2)
            ans += c1;
        else
            ans += c2;

        l = num;
    }

    cout << ans << endl;

    return 0;

}
