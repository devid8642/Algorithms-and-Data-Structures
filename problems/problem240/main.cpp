#include "bits/stdc++.h"

#define pb push_back
#define mk make_pair
#define fi first
#define se second

using namespace std;

int main() {
    int x, y, l1, h1, l2, h2;

    cin >> x >> y;
    cin >> l1 >> h1;
    cin >> l2 >> h2;

    if ((l1 + l2 <= x) && (h1 <= y && h2 <= y))
        cout << 'S' << endl;
    else if ((l1 + h2 <= x) && (h1 <= y && l2 <= y))
        cout << 'S' << endl;
    else if ((h1 + h2 <= x) && (l1 <= y && l2 <= y))
        cout << 'S' << endl;
    else if ((h1 + l2 <= x) && (l1 <= y && h2 <= y))
        cout << 'S' << endl;
    else if ((l1 + l2 <= y) && (h1 <= x && h2 <= x))
        cout << 'S' << endl;
      else if ((l1 + h2 <= y) && (h1 <= x && l2 <= x))  
        cout << 'S' << endl;
      else if ((h1 + h2 <= y) && (l1 <= x && l2 <= x))
        cout << 'S' << endl;
      else if ((h1 + l2 <= y) && (l1 <= x && h2 <= x))
        cout << 'S' << endl;
    else
        cout << 'N' << endl;

    return 0;

}
