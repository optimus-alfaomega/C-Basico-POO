/*
 * Cuadrado.h
 *
 *  Created on: 10/12/2014
 *      Author: javi
 */

#ifndef CLASSESABSTRACTAS_CUADRADO_H_
#define CLASSESABSTRACTAS_CUADRADO_H_

#include "Poligono.h"

namespace ejemplos {

class Cuadrado: public Poligono {
private:
	float _lado;
public:
	Cuadrado();
	virtual ~Cuadrado();

	float area();

	float getLado() const {
		return _lado;
	}

	void setLado(float lado) {
		this->_lado = lado;
	}
};

} /* namespace ejemplos */

#endif /* CLASSESABSTRACTAS_CUADRADO_H_ */
