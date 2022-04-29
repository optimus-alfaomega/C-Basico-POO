/*
 * Cuadrado.cpp
 *
 *  Created on: 10/12/2014
 *      Author: javi
 */

#include "Cuadrado.h"
#include <iostream>

namespace ejemplos {

Cuadrado::Cuadrado() {
	_lado = 0;
}

Cuadrado::~Cuadrado() {

}

float Cuadrado::area() {
	std::cout << "Llamada la función area() de Cuadrado" << std::endl;
	return _lado*_lado;
}

} /* namespace ejemplos */
