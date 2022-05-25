#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int tot = 0;
    
    cin >> n;
    
    while (n != 1) {
        if (n % 2 == 0)
            n = n/2;
        else
            n = 3*n + 1;
        tot++;
    }
    
    cout << tot << endl;

    return 0;
}
