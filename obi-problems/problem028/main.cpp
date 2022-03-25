#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cont = 0;
    vector<pair<int, char>> botas_d;
    vector<pair<int, char>> botas_e;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        char c;

        cin >> x >> c;

        if (c == 'D')
            botas_d.push_back({x, c});
        else
            botas_e.push_back({x, c});
    }

    sort(botas_d.begin(), botas_d.end());
    sort(botas_e.begin(), botas_e.end());

    for (int i = 0; i < n/2; i++) {
        int tam = botas_d[i].first;

        for (int j = 0; j < (int)botas_e.size(); j++) {
            if (tam == botas_e[j].first) {
                cont++;
                botas_e.erase(botas_e.begin()+j, botas_e.begin()+j);
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
