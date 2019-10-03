// paroimpar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num;
	cout << "Escribe un numero entero ";
	cin >> num;
	if (((num)) % 2 == 0) {
		cout << "El numero es par";
	}
	else
	{
		cout << "El numero es impar";
	}
	return 0;
}
