// Pantalonesdescuento.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <string>

using namespace std;

int main() {
	int p1;
	int p2;
	int p3;
	int p4;
	int p5;
	float pc;
	float sum;
	float total;
	cout << "Cual es el precio del primer pantalon" << endl;
	cin >> p1;
	cout << "Cual es el precio del segundo pantalon" << endl;
	cin >> p2;
	cout << "Cual es el precio del tercer pantalon" << endl;
	cin >> p3;
	cout << "Cual es el precio del cuarto pantalon" << endl;
	cin >> p4;
	cout << "Cual es el precio del quinto pantalon" << endl;
	cin >> p5;
	sum = p1 + p2 + p3 + p4 + p5;
	pc = sum * .10;
	total = sum - pc;
	if (sum >= 550) {
		cout << "El costo tiene un costo del 10%" << endl;
		cout << "Usted tiene que pagar: " << total << endl;
	}
	else {
		cout << "No alcanza el descuento" << endl;
		cout << "Usted tiene que pagar: " << sum << endl;
	}
	return 0;
}
