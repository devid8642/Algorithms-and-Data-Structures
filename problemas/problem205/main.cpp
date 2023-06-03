#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 1; int v = 1;
    vector<pair<int, int>> voos;
    vector<vector<int>> ans;

    while (a != 0 && v != 0) {
        cin >> a >> v;
        vector<int> tmp;

        if (a == 0 && v == 0)
            break;
        
        for (int i = 0; i < a; i++)
            voos.push_back({0, i + 1});

        for (int i = 0; i < v; i++) {
            int x, y;

            cin >> x >> y;

            voos[x - 1].first++;
            voos[y - 1].first++;
        }

        sort(voos.rbegin(), voos.rend());

        for (int i = 0; i < (int)voos.size(); i++) {
            if (i == 0)
                tmp.push_back(voos[i].second);
            else if (voos[i].first == voos[0].first)
                tmp.push_back(voos[i].second);
        }
        
        ans.push_back(tmp);
        voos.clear();
        tmp.clear();
    }

    for (int i = 0;i < ans.size(); i++) {
        cout << "Teste " << i + 1 << endl;
        sort(ans[i].begin(), ans[i].end());
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }

    return 0;

}
