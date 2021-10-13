#include<iostream>
using namespace std;

float funcaoDelta (float a, float b, float c) {
	float delta;
	delta = ((b*b) - (4*a*c));
	return delta;	
}
int main() {
	float a, b, c, resultado;
	cout << "\nDigite o primeiro numero: ";
	cin >> a;
	cout << "\nDigite o segundo numero: ";
	cin >> b;
	cout << "\nDigite o terceiro numero: ";
	cin >> c;
	resultado = funcaoDelta(a, b, c);
	cout << "\n O valor de delta é: " << resultado;
	return 0;
}
