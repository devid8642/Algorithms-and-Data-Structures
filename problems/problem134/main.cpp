#include <iostream>

using namespace std;

int main() {
    int c = 0;


    for (int i = 0; i < 8; i++) {
        double x;

        cin >> x;

        if (x > 1.8)
            c++;
    }

    cout << c << " jogadores encontrados" << endl;
    

    return 0;

}
