#include <iostream>

/*
 Union-Find: É um algoritmo que implementa uma estrutura de dados
 baseada em elementos filhos que são representados por um elemento patriarca
 chamado de pai. A operação find consiste em encontrar o pai de um elemento, enquanto a 
 operação union consiste em unir duas estruturas fazendo com que um pai de determinados elementos
 torne-se filho do pai da outra estrutra que está se unindo a essa primeira.
*/

/*
 Problema: http://br.spoj.com/problems/FUSOES1/
*/

#define MAXN 100100

int pai[MAXN], peso[MAXN];
int n, k;

using namespace std;


int find(int x) {
	if (pai[x] == x)
		return x;
	return pai[x] = find(pai[x]);
}

void join(int x, int y) {
	x = find(x);
	y = find(y);

	if (x == y)
		return;

	if (peso[x] < peso[y])
		pai[x] = y;
	else if (peso[x] > peso[y])
		pai[y] = x;
	else {
		pai[x] = y;
		peso[y]++;
	}
}

int main() {
	char op;
	int b1, b2;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		pai[i] = i;

	for (int i = 1; i <= k; i++) {
		cin >> op >> b1 >> b2;

		if (op == 'F')
			join(b1, b2);
		else {
			if (find(b1) == find(b2))
				cout << "S\n";
			else
				cout << "N\n";
		}
	}

	return 0;
}