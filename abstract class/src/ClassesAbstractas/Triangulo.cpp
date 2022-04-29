/*
 * Triangulo.cpp
 *
 *  Created on: 10/12/2014
 *      Author: javi
 */

#include "Triangulo.h"

namespace ejemplos {

Triangulo::Triangulo() {
	// TODO Auto-generated constructor stub
	_altura = 0;
	_base = 0;

}

Triangulo::~Triangulo() {
	// TODO Auto-generated destructor stub
}

float Triangulo::area(){
	return (_base*_altura)/2;
}

} /* namespace ejemplos */
