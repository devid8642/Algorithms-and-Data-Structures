#include <iostream>

using namespace std;

int main() {
    
    int a1, a2, d1, d2;
    bool jog1 = true; bool jog2 = true;
    
    cin >> a1 >> d1 >> a2 >> d2;
    
    if (a1 != d2)
        jog2 = false;
    if (a2 != d1)
        jog1 = false;
        
    if ((jog1 && jog2) || (!jog1 && !jog2))
        cout << -1 << endl;
    else if (jog1)
        cout << 1 << endl;
    else
        cout << 2 << endl;
    
    return 0;
}
