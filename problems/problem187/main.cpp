#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    for (int i = min(a, b); i <= max(a, b); i++)
        cout << i << " ";
    cout << endl;

    return 0;

}
