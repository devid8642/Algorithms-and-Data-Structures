#include <bits/stdc++.h>

using namespace std;

int main() {
    int o1, p1, b1, o2, p2, b2;
    
    cin >> o1 >> p1 >> b1 >> o2 >> p2 >> b2;
    
    if (o1 > o2)
        cout << 'A' << endl;
    else if (o2 > o1)
        cout << 'B' << endl;
    else if (p1 > p2)
        cout << 'A' << endl;
    else if (p2 > p1)
        cout << 'B' << endl;
    else if (b1 > b2)
        cout << 'A' << endl;
    else if (b2 > b1)
        cout << 'B' << endl;
        
    return 0;
}
