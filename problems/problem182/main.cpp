#include <iostream>

using namespace std;

int main() {
    int p;

    cin >> p;

    if (p % 3 == 1)
        cout << "Sobral" << endl;
    else if (p % 3 == 2)
        cout << "Ubajara" << endl;
    else
        cout << "Tiangua" << endl;

    return 0;

}
