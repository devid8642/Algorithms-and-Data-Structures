#include <bits/stdc++.h>

using namespace std;

long long int mdc(long long int a, long long int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

int main() {
    long long int n, m;
    
    cin >> n >> m;
    
    for (long long int i = m; i >= 1; i--) {
        if (mdc(i, n) == 1) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
