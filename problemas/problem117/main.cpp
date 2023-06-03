#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    char c;
    int cont = 0;
    
    cin >> str >> c;
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == c)
            cont++;
    }
    
    cout << cont << endl;

    return 0;
}
