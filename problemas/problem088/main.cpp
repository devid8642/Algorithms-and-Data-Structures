#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    
    cin >> x;
    
    if (x <= 1979)
        cout << "Geracao X!!!" << endl;
    else if (x >= 1980 && x <= 1995)
        cout <<  "Geracao Millennials. Muito cringe!!!" << endl;
    else if (x >= 1996 && x <= 2010)
        cout << "Geracao Z!!!" << endl;
    else
        cout << "Geracao Alpha!!!" << endl;
    
    return 0;
    
}
