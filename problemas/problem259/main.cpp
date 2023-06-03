#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int n;
    string s1, s2;

    cin >> n;
    cin.ignore();

    getline(cin, s1);

    getline(cin, s2);

    for (int i = 0; i < n; i++) {
        if (s1[i] == ' ' || s1[i] == '.' || s1[i] == ',')
            s1.erase(s1.begin()+i);
    }

    for (int i = 0; i < n; i++) {
        if (s2[i] == ' ' || s2[i] == '.' || s2[i] == ',')
            s2.erase(s2.begin()+i);
    }
    
    for (int i = 0; i < s1.size(); i++) {
        for (int j = 0; j < s2.size(); j++) {
            if (s1[i] == s2[j]) {
                s2.erase(s2.begin()+j);
            }
        }
    }

    if (s2.size() == 0)
        cout << 'S' << endl;
    else
        cout << 'N' << endl;

    return 0;

}
