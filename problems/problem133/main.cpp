#include <iostream>

using namespace std;

int main() {
    int n;
    long long unsigned int p = 2;

    cin >> n;

    for (int i = 0; i < n; i++)
        p = 2*p - 1;

    cout << p*p << endl;

    return 0;

}
