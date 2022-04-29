/*
 * Triangulo.h
 *
 *  Created on: 10/12/2014
 *      Author: javi
 */

#ifndef CLASSESABSTRACTAS_TRIANGULO_H_
#define CLASSESABSTRACTAS_TRIANGULO_H_

#include "Poligono.h"

namespace ejemplos {

class Triangulo: public Poligono {
private:
	float _base;
	float _altura;
public:
	Triangulo();
	virtual ~Triangulo();

	float area();
};

} /* namespace ejemplos */

#endif /* CLASSESABSTRACTAS_TRIANGULO_H_ */
