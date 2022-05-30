#include <iostream>

using namespace std;

int main() {
	int a, b;
	
	cin >> a >> b;
	
	if (a > b) {
		cout << "O maior numero e " << a << endl;
		cout << "O menor numero e " << b << endl;
	}
	else if (b > a) {
		cout << "O maior numero e " << b << endl;
		cout << "O menor numero e " << a << endl;
	}
	else
		cout << "Numeros iguais" << endl;
	return 0;
	
}
