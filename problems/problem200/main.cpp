#include <iostream>

using namespace std;

bool p(int x) {
    
    if (x == 1)
        return false;

    int c = 0;

    for (int i = 1; i <= x; i++) {
        if (x % i == 0)
            c++;
    }

    if (c > 2)
        return false;
    else
        return true;
}

int main() {
    int n;

    cin >> n;

    if (p(n))
        cout << 'S' << endl;
    else
        cout << 'N' << endl;

    return 0;

}
