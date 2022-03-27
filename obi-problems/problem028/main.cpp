#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cont = 0;
    vector<int> botas_d;
    vector<pair<int, bool>> botas_e;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        char c;

        cin >> x >> c;

        if (c == 'D')
            botas_d.push_back(x);
        else
            botas_e.push_back({x, false});
    }

    sort(botas_d.begin(), botas_d.end());
    sort(botas_e.begin(), botas_e.end());

    for (int i = 0; i < (int)botas_d.size(); i++) {
        int tam = botas_d[i];

        for (int j = 0; j < (int)botas_e.size(); j++) {
            if (tam == botas_e[j].first && botas_e[j].second == false) {
                cont++;
                botas_e[j].second = true;
                break;
            }
            else {
                if (botas_e[j].first > tam)
                    break;
            }
        }
    }

    cout << cont << endl;

    return 0;

}
