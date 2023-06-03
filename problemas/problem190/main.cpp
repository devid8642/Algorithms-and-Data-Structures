#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    vector<char> vog1;
    vector<char> vog2;
    bool ctl = true;

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            vog1.push_back(s[i]);
    }

    for (int i = (int)s.size() - 1; i >= 0; i--) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            vog2.push_back(s[i]);
    }

    for (int i = 0; i < (int)vog1.size(); i++) {
        if (vog1[i] != vog2[i])
            ctl = false;
    }

    if (ctl)
        cout << 'S' << endl;
    else
        cout << 'N' << endl;

    return 0;

}
