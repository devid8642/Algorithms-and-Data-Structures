#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> par;
    vector<int> imp;

    for (int i = 0; i < 10; i++) {
        int x;

        cin >> x;

        if (x % 2 == 0)
            par.push_back(x);
        else
            imp.push_back(x);
    }

    for (int i = 0; i < (int)par.size(); i++)
        cout << par[i] << " ";
    cout << endl;

    for (int i = 0; i < (int)imp.size(); i++)
        cout << imp[i] << " ";
    cout << endl;

    return 0;

}
