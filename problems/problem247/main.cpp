#include <iostream>

using namespace std;

int main() {
    string name;
    int a, d, v, g;
    
    cin >> name;
    
    cin >> a >> d >> v >> g;
    
    if (g - d >= v)
        cout << name << " morreu :(" << endl;
    else
        cout << name << " sobreviveu!!!" << endl;

    return 0;
}
