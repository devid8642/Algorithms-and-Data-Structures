#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int v[205];
    int c = 0; int tmp = 0;
    int maior;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v, v + n);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (v[i] == v[j])
                c++;
        }
        if (c > tmp) {
            maior = v[i];
            tmp = c;
        }
        else {
            if (c == tmp && v[i] > maior) {
                maior = v[i];
                tmp = c;
            }
        }

        c = 0;
    }

    cout << maior << endl;

    return 0;

}
