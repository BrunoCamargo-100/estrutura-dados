#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

#include "Fila.cpp"

// Implementar um m�todo que:
// - liste os elementos da fila utilizando apenas os m�todos
// inserir e remover


int main() {
	Fila minhaFila;
	string retorno;
	
	minhaFila.inserir(4);
	minhaFila.inserir(5);
	minhaFila.inserir(6);

	
	retorno = minhaFila.listar();
	cout << retorno << "\n";
	//- 4 - 5 - 6-
	if (retorno == " - 4 - 5 - 6 - ")
		cout << "listar ok\n";
	else
		cout << "listar n�o ok\n";


	//cout << resultado << "\n";

	//minhaFila.remover(y);
	//cout << y << "\n";
	//minhaFila.remover(y);
	//cout << y << "\n";

	
}

