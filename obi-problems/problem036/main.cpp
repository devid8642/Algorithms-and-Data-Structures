#include <bits/stdc++.h>

using namespace std;

int main() {
    char alfa[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'z'};
    string p;
    vector<char> ans;

    cin >> p;

    for (int i = 0; i < p.size(); i++) {
        if (p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u')
            ans.push_back(p[i]);
        else {
            ans.push_back(p[i]);
            char v1 = ' '; char v2 = ' '; char cons = 'z';
            int d1 = 0; int d2 = 0; int pos;

            for (int j = 0; j < 24; j++)
                if (alfa[j] == p[i])
                    pos = j;

            for (int j = pos + 1; j < 24; j++) {
                if (alfa[j] == 'a' || alfa[j] == 'e' || alfa[j] == 'i' || alfa[j] == 'o' || alfa[j] == 'u') {
                    v1 = alfa[j];
                    break;
                }
                d1++;
            }

            for (int j = pos - 1; j > -1; j--) {
                if (alfa[j] == 'a' || alfa[j] == 'e' || alfa[j] == 'i' || alfa[j] == 'o' || alfa[j] == 'u') {
                    v2 = alfa[j];
                    break;
                }
                d2++;
            }

            if (d1 < d2 && v1 != ' ')
                ans.push_back(v1);
            else
                ans.push_back(v2);

            for (int j = pos + 1; j < 24; j++) {
                if (alfa[j] == 'a' || alfa[j] == 'e' || alfa[j] == 'i' || alfa[j] == 'o' || alfa[j] == 'u')
                    continue;
                else {
                    cons = alfa[j];
                    break;
                }
            }

            ans.push_back(cons);
        }
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i];
    cout << endl;

    return 0;

}
