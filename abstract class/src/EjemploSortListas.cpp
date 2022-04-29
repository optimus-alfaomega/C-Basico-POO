#include <iostream>
#include <list>

#include "ClassesAbstractas/Rectangulo.h"

using namespace std;
using namespace ejemplos;

bool funcion_compara_rectangulos(const Rectangulo& r1, const Rectangulo& r2) {
	return r1.getAncho() < r2.getAncho();
}

int main() {
	list<Rectangulo> lista1;
	list<Rectangulo> lista2;
	list<Rectangulo> lista3;


	Rectangulo r1 = Rectangulo(2,3);
	Rectangulo r2 = Rectangulo(10,4);
	Rectangulo r3 = Rectangulo(5,10);

	list<Rectangulo>::iterator it;

	lista1.push_back(r1);
	lista1.push_back(r2);
	lista1.push_back(r3);

	cout << "Lista original" << endl;
	for (it=lista1.begin(); it != lista1.end(); it++) {
		cout << "Rectangulo: " << it->getAncho() << "," << it->getAlto() << endl;
	}

	/* Ordenamos la lista utilizando una función */
	lista1.sort(funcion_compara_rectangulos);

	cout << "Lista ordenada usando una función propia" << endl;

	for (it=lista1.begin(); it != lista1.end(); it++) {
		cout << "Rectangulo: " << it->getAncho() << "," << it->getAlto() << endl;
	}


	/* Otra opción sería ordenar la lista habiendo sobrecargado el operador <, de forma que no hay
	 * que pasar nada a sort. Si no tuviéramos sobrecardado este operador tendríamos un error de compilación */

	lista2.push_back(r1);
	lista2.push_back(r2);
	lista2.push_back(r3);

	lista2.sort();
	cout << "Lista ordenada sobrecargando el operador < para que ordene por alto" << endl;

	for (it=lista2.begin(); it != lista2.end(); it++) {
		cout << "Rectangulo: " << it->getAncho() << "," << it->getAlto() << endl;
	}

	/* Otra opción, sólo en C++11 sería ordenar la vista usando una función lambda, 
	 * esta vez ordenamos por alto en orden descendente */

	lista3.push_back(r1);
	lista3.push_back(r2);
	lista3.push_back(r3);

	lista3.sort( [](const Rectangulo &x, const Rectangulo &y) { return x.getAlto() > y.getAlto(); } );
	cout << "Lista ordenada usando una función lambda que ordena por alto descendente" << endl;

	for (it=lista3.begin(); it != lista3.end(); it++) {
		cout << "Rectangulo: " << it->getAncho() << "," << it->getAlto() << endl;
	}




}
