#include <iostream>

using namespace std;

int main() {
	int soma = 0;
	
	for (int i = 0; i < 5; i++) {
		int x;
		
		cin >> x;
		soma += x;
	}
	
	if (soma >= 40)
		cout << "Carga de horas completa" << endl;
	else
		cout << "Carga de horas incompleta" << endl;
		
	
	return 0;
	
}
