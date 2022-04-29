/*
 * Rectangulo.h
 *
 *  Created on: 10/12/2014
 *      Author: javi
 */

#ifndef CLASSESABSTRACTAS_RECTANGULO_H_
#define CLASSESABSTRACTAS_RECTANGULO_H_

#include "Poligono.h"

namespace ejemplos {

class Rectangulo: public Poligono {
private:
	float _ancho;
	float _alto;
public:
	Rectangulo();
	Rectangulo(float a, float b);
	virtual ~Rectangulo();

	/* Las clases que heredan deben redeclarar los métodos virtuales */
	float area();

	float getAlto() const {
		return _alto;
	}

	void setAlto(float alto) {
		this->_alto = alto;
	}

	float getAncho() const {
		return _ancho;
	}

	void setAncho(float ancho) {
		this->_ancho = ancho;
	}

    bool operator < ( const Rectangulo& r )
    {
    	return this->_alto < r.getAlto();
    }
};

} /* namespace ejemplos */

#endif /* CLASSESABSTRACTAS_RECTANGULO_H_ */
