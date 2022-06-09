#include <iostream>

using namespace std;

int main() {
	int ha, ma, hr, mr;
	
	cin >> ha >> ma >> hr >> mr;
	
	int dif = (hr*60 + mr) - (ha*60 + ma + 45);
	
	if (dif >= 0)
		cout << "Sucesso" << endl;
	else
		cout << "Atrasado " << (abs(dif)) << endl;
	
	return 0;
	
}
