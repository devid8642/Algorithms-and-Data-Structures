#include <bits/stdc++.h>

using namespace std;

/* 
Uma fila de prioridade possui um funcionamento muito semelhando ao de uma fila comum, com a
diferença de que a fila de prioridade implementa uma árvore balanceada em seu código. Isso faz
com que o primeiro elemento da fila seja sempre o maior e também a complexidade de inserção de um
elemento na fila seja O(log n).
*/


int main() {

	// Criando uma Fila
	priority_queue<int> fila;

	// Inserindo elementos na fila
	fila.push(1);
	fila.push(2);


	// Acessando o maior elemento
	cout << fila.top() << endl;

	// Remove o elemento 2 da fila
	fila.pop();

	cout << fila.top() << endl;
	
	return 0;
}