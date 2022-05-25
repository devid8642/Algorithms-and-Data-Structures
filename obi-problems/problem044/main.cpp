#include <bits/stdc++.h>

using namespace std;

int main() {
   int a, b, c, d;
   bool ctl = true;
   
   cin >> a >> b >> c >> d;
   
   if (a != b + c + d)
        ctl = false;
    else if (d != b + c)
        ctl = false;
    else if (b != c)
        ctl = false;
        
    if (ctl)
        cout << 'S' << endl;
    else
        cout << 'N' << endl;
    
    return 0;
}
