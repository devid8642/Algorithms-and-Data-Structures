#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; int sum = 0;
    vector<int> divs;
    bool primo = false;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i != 1 && i != n)
                primo = true;
            divs.push_back(i);
            sum += i;
        }
    }
    
    cout << divs.size() << " " << "divisor(es): ";
    for (int i = 0; i < divs.size(); i++)
        cout << divs[i] << " ";
    cout << endl;
    
    cout << "Soma de divisores = " << sum << endl;
    
    if (primo == true || n <= 1)
        cout << "Nao primo" << endl;
    else
        cout << "Primo" << endl;
    
    return 0;
}
