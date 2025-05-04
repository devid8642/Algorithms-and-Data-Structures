#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    stack<int> ans;
    
    cin >> n;
    
    while (true) {
        if (n == 1 || n == 0) {
            ans.push(n);
            break;
        }
        if (n % 2 == 0) {
            ans.push(0);
            n = n/2;
        }
        else {
            ans.push(1);
            n = n/2;
        }
    }
    
    while (!(ans.empty())) {
        cout << ans.top();
        ans.pop();
    }

    return 0;
}
