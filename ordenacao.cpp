#include <iostream>

using namespace std;

int main() {
	int lista[5];
	lista[0] = 10;
	lista[1] = 30;
	lista[2] = 32;
	lista[3] = 21;
	lista[4] = 31;

	int menorValor = 0;
	
	for(int i = 0; i <= 4; i++) {
		if(lista[i] < lista[menorValor]) {
			menorValor = i;
		}
	}
	
	cout << "O menor valor " << lista[menorValor] << endl;
	return 0;
}
