#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 1;
    int k = 0;
    int ans[105][105];
    int ns[105];

    while (n != 0) {
        cin >> n;
        ns[k] = n;
        ans[k][0] = 0;


        for (int i = 1; i <= n; i++) {
            int j, z;

            cin >> j >> z;

            ans[k][i] = ans[k][i - 1] + j - z;
        }
        k++;
    }

    for (int i = 0 ; i < k - 1; i++) {
        cout << "Teste " << i + 1 << endl;
        for (int j = 1; j <= ns[i]; j++)
            cout << ans[i][j] << endl;
        if (i != k - 2)
            cout << endl;
    }

    return 0;

}
