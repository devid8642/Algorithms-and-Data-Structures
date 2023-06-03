#include <iostream>

using namespace std;

long int mdc(long int x, long int y) {
    
    if (y == 0)
        return x;

    return mdc(y, x % y);
        
}

int main() {
    long int a, b, c, d;

    cin >> a >> b >> c >> d;


    long int deno = b * d;
    long int num = a * d + c * b;

    long int m = mdc(num, deno);

    cout << num/m << " " << deno/m << endl;


    return 0;

}
