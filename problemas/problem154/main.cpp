#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    int sum = 0; int i;
    
    cin >> n;
    
    for (i = 0; i < n.size(); i++)
        sum += n[i] - '0';
        
    i--;
    
    if (n[i] - '0' == 0 || n[i] - '0' == 2 || n[i] - '0' == 4 || n[i] - '0' == 6 || n[i] - '0' == 8)
        cout << 'S' << endl;
    else
        cout << 'N' << endl;
    if (sum % 3 == 0)
        cout << 'S' << endl;
    else
        cout << 'N' << endl;
    if (n[i] - '0' == 0 || n[i] - '0' == 5)
        cout << 'S' << endl;
    else
        cout << 'N' << endl;
    
    return 0;
}
