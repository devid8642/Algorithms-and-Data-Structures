#include <iostream>

using namespace std;

int main(){
    double d, a, l, p;
    double raio, cal1, cal2;
    
    cin >> d >> a >> l >> p;
   
    if (d <= a && d <= l && d <= p) {
        cout << "S" << endl;
        return 0;
    }
    
    cout << "N" << endl;

    return 0;
}
