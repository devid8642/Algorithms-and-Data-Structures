#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, a;
    int cont = 0;
    
    cin >> c >> a;
    
    while (a > 0) {
        a++;
        a -= c;
        cont++;
    }
    
    cout << cont << endl;
    
    return 0;
}
