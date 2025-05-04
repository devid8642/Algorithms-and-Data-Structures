#include <bits/stdc++.h>

using namespace std;

int main() {
    double n, m, p;
    
    cin >> n >> m >> p;
    
    if ((m/n)*100 >= p)
        cout << "UdiCity esta segura!!!" << endl;
    else
        cout << "UdiCity esta em perigo, vamos de LockDalson!!!" << endl;
    
    return 0;
    
}
