#include <bits/stdc++.h>

using namespace std;

// MAP IMPLEMENTATION

int main() {
	map<string, int> M; // Cria uma variável do tip map que mapeia strings pra inteiros
	map<string, int>::iterator it;

	// Ambas formas válidas de inserir elementos no map
	M.insert(make_pair("Devid", 16));
	M["Thiagao"] = 16;

	// Busca no map
	if (M.find("Devid") != M.end())
		cout << "Encontrei!" << endl;
	else
		cout << "Não encontrei!" << endl;

	cout << M["Alana"] << endl;

	// Para deleção utiliza-se o erase
	M.erase("Thiagao");

	cout << M["Thiagao"] << endl;

	// Varrendo o map

	for (it = M.begin(); it != M.end(); it++) {
		cout << it->first << it->second;
		cout << "" << endl;
	}

	// Limpa o map
	M.clear();

	for (it = M.begin(); it != M.end(); it++) {
		cout << it->first << it->second;
		cout << "" << endl;
	}

	return 0;
}