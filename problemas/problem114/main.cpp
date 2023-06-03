#include <iostream>

using namespace std;

int main() {
	string nome;
	
	cin >> nome;
	
	if (nome == "roraima" || nome == "acre" || nome == "amapa" || nome == "amazonas" || nome == "para" || nome == "rondonia" || nome == "tocantins")
		cout << "Regiao Norte" << endl;
	else
		cout << "Outra regiao" << endl;
	
	return 0;
	
}
