#include <bits/stdc++.h>

using namespace std;

int ans[6];

int main() {
    int c; int tot = 0;
    
    cin >> c;
    
    while (true) {
        if (c == 0)
            break;
        else if (c >= 1000) {
            int x =  c/1000;
            c -= x*1000;
            ans[0] += x;
            tot += x;
        }
        else if (c > 100) {
            int x =  c/100;
            c -= x*100;
            ans[0] += x;
            tot += x;
        }
        else if (c >= 50) {
            int x =  c/50;
            c -= x*50;
            ans[1] += x;
            tot += x;
        }
        else if (c >= 25) {
            int x =  c/25;
            c -= x*25;
            ans[2] += x;
            tot += x;
        }
        else if (c >= 10) {
            int x =  c/10;
            c -= x*10;
            ans[3] += x;
            tot += x;
        }
        else if (c >= 5) {
            int x =  c/5;
            c -= x*5;
            ans[4] += x;
            tot += x;
        }
        else if (c >= 1) {
            int x =  c/1;
            c -= x*1;
            ans[5] += x;
            tot += x;
        }
    }
    
    cout << tot << endl;
    
    for (int i = 0; i < 6; i++)
        cout << ans[i] << endl;

    return 0;
}
