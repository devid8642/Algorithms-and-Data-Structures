#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int v[3];

    cin >> v[0] >> v[1] >> v[2];

    sort(v, v + 3);

    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;

    return 0;

}
