#include<iostream>

float funcao (int parametro) {
	if (parametro < 0) {
		std::cout << parametro;
		return 1;
	}
	return 0;	
}

int main() {
	
	int numero;
	std::cin  >> numero;	
	if (funcao(numero)) {
		std::cout << "\nNegativo";
	} else {
		std::cout << "\nPositivo";
	}
	return 0;
}
