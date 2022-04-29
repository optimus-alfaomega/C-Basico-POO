/*
 * UsadoraPoligono.h
 *
 *  Created on: 10/12/2014
 *      Author: javi
 */

#ifndef CLASSESABSTRACTAS_USADORAPOLIGONO_H_
#define CLASSESABSTRACTAS_USADORAPOLIGONO_H_

#include "Poligono.h"

namespace ejemplos {

class UsadoraPoligono {
private:
	// Declaramos una variable de tipo puntero a objeto de la clase Poligono
	Poligono* _poligono;
public:
	UsadoraPoligono(Poligono* p);
	virtual ~UsadoraPoligono();

	void set_poligono(Poligono* p);
	float calcula_area();
};

} /* namespace ejemplos */

#endif /* CLASSESABSTRACTAS_USADORAPOLIGONO_H_ */
