#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int n, m;
    int a[1005];
    int b[10005];
    int c[10005];

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);

    int pos = 0;
    
    for (int i = 0; i < m; i++) {
        int j = lower_bound(a, a + n, b[i]) - a;
        if (j == n) {
            c[pos] = b[i];
            pos++;
        }
        else if (a[j] != b[i]) {
            c[pos] = b[i];
            pos++;
        }
    }

    sort(b, b + m);

    bool ctl = true; int x;

    for (int i = 0; i < pos; i++) {
        int k = c[i];
        int l = 0; int r = m - 1;
        bool aux = false;

        while (l < r) {
            if (b[l] + b[r] == k) {
                aux = true;
                break;
            }
            else if (b[l] + b[r] > k)
                r--;
            else
                l++;
        }

        if (!aux) {
            if (k % 2 == 0) {
                int w = lower_bound(b, b + m, k/2) - b;
                if (w != m)
                    if (b[w]*2 == k)
                        continue;
                    else {
                        ctl = false;
                        x = k;
                        break;
                    }
                else {
                    ctl = false;
                    x = k;
                    break;
                }
                    
            }
            else {
                ctl = false;
                x = k;
                break;
            }
        }
    }

    if (ctl)
        cout << "sim" << endl;
    else
        cout << x << endl;

    return 0;

}
