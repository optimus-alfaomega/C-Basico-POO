/*
 * Rectangulo.cpp
 *
 *  Created on: 10/12/2014
 *      Author: javi
 */

#include "Rectangulo.h"
#include <iostream>

namespace ejemplos {

Rectangulo::Rectangulo() {
	_ancho = 0;
	_alto = 0;
}

Rectangulo::Rectangulo(float a, float b) {
	_ancho = a;
	_alto = b;
}

Rectangulo::~Rectangulo() {

}

float Rectangulo::area() {
	std::cout << "Llamada la función area() de Rectangulo" << std::endl;
	return _ancho * _alto;
}

} /* namespace ejemplos */
