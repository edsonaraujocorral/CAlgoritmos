#include <iostream>

using namespace std;

int main() {
	//Lista 01
	int lista01[] = {20, 32, 34, 54};
	int menorValor = 0;
	for(int i = 0; i <= 4; i++) {
		if(lista01[i] < lista01[menorValor]) {
			menorValor = i;
		}
	}

	cout << "O menor valor da lista 01 : " << lista01[menorValor] << endl;

	return 0;
}
