#include <iostream>

using namespace std;

int main() {
    double n1, n2;
    double m;

    cin >> n1 >> n2;

    m = (n1*2 + n2*3)/5;

    if (m >= 7)
        cout << "Aprovado" << endl;
    else if (m < 3)
        cout << "Reprovado" << endl;
    else
        cout << "Final" << endl;

    return 0;

}
