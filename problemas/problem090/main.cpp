#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d, m, p;
    
    cin >> n >> d >> m >> p;
    
    if (n*d > m *p)
        cout << "NERF" << endl;
    else
        cout << "BUFF" << endl;
    
    return 0;
    
}
