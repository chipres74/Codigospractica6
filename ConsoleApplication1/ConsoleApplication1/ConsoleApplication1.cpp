// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<string>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

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