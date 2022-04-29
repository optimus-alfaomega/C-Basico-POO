/*============================================================================
Name        : EjemploClasesAbstractas.cpp
Author      : Javi
Version     :
Copyright   : GNU GPLv3
Description :

Este ejemplo demuestra cómo utilizar clases abstractas en C++
El objetivo del ejemplo es mostrar cómo una clase madre abstracta
define una interfaz de programación común para las clases o programas
que la utilicen.

En este ejemplo la clase madre Poligono define la funcion area(), y obliga
a las clases hijas a implementar esta función. En el ejemplo las clases
Cuadrado y Rectángulo son clases hijas que implementan la función area().

El código del programa principal tiene una función que recibe un objeto de la
clase madre (Polígono), y llama a la función area().

void imprime_area(Poligono* pol)

En el código se declara primero un objeto rectángulo y otro cuadrado
y se llama a imprime_area() pasándole cada vez un objeto.
Esto es porsible porque en OO una variable del tipo clase madre puede contener objetos del tipo
de las clases hijas.

En la segunda parte del código se utiliza una clase que usa la clase Poligono de forma genérica.
Así, podemos configurar la clase UsadoraPoligono fijando el objeto de tipo polígono
en un rectángulo o en un cuadrado. La clase UsadoraPoligono se desacopla de qué subclase recibe,
simplemente llama a area() que es la interfaz que proporciona la clase superior.
//============================================================================
*/
#include <iostream>

#include "ClassesAbstractas/Poligono.h"
#include "ClassesAbstractas/Rectangulo.h"
#include "ClassesAbstractas/Cuadrado.h"
#include "ClassesAbstractas/UsadoraPoligono.h"


using namespace std;
using namespace ejemplos;


void imprime_area(Poligono* pol) {
	if (pol != NULL){
		/*
		 * Se llama al método "area" de la clase "Poligono". Cualquier clase
		 * hija de "Poligono" tendra el mismo método con los mismos parámetros
		 * y tipo devuelto, así que será un parámetro válido para la función.
		 */
		cout << "El área es " << pol->area() << endl;
	} else {
		cout << "Pasa un objeto válido" << endl;
	}
}

int main() {
	/* Poligono p;
	 * Si intentamos declarar una variable Polígono tendremos un error
	 * de compilación porque  no se pueden instanciar clases abstractas.
	 * Lo que si se puede es declarar punteros a las clases abstractas.
	 */

	Rectangulo* r = new Rectangulo();
	r->setAncho(4);
	r->setAlto(5);

	Cuadrado* c = new Cuadrado();
	c->setLado(4);

	/* Esta función admite como parámetro Poligono o cualquier clase hija */
	cout << "Llamamos a imprime_area pasandole distintos tipos de objetos";
	imprime_area(r);
	imprime_area(c);

	cout << "Clase usadora de la interfaz (clase abstracta)";
	cout << "definida por Poligono" << endl;

	// fijamos el polígono que va a usar la clase y llamamos a
	// calcular área que internamente llama a area() del objeto Poligono
	UsadoraPoligono usadora = UsadoraPoligono(r);
	usadora.calcula_area();

	usadora.set_poligono(c);
	usadora.calcula_area();

	delete c;
	delete r;

	return 0;
}
