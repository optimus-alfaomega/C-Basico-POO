/*
 * UsadoraPoligono.cpp
 *
 *  Created on: 10/12/2014
 *      Author: javi
 */

#include "UsadoraPoligono.h"
#include <cstddef>
#include <typeinfo>
#include <iostream>

namespace ejemplos {

UsadoraPoligono::UsadoraPoligono(Poligono* p) {
	// TODO Auto-generated constructor stub
	_poligono = p;
}

UsadoraPoligono::~UsadoraPoligono() {
	// TODO Auto-generated destructor stub
}

void UsadoraPoligono::set_poligono(Poligono* p) {
	if (p != NULL) // En C++11 nullptr;
		_poligono = p;
}

float UsadoraPoligono::calcula_area() {
	/* Llamamos a la función area() del Poligono, UsadoraPoligono no conoce
	 * el objeto que recibe, pero sabe que tiene un método que se llama area()
	 */
	if (_poligono != NULL) { // En C++11 nullptr;
		std::cout << typeid(_poligono).name() << std::endl;
		return _poligono->area();
	} else {
		return 0;
	}
}

} /* namespace ejemplos */
