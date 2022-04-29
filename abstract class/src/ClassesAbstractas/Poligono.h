/*
 * Poligono.h
 *
 *  Created on: 10/12/2014
 *      Author: javi
 */

#ifndef CLASSESABSTRACTAS_POLIGONO_H_
#define CLASSESABSTRACTAS_POLIGONO_H_

namespace ejemplos {

class Poligono {
public:
	Poligono() {}; // Colocamos aquí la implementación del constructor y destructor
	virtual ~Poligono() {};

	/* Declaración de un método virtual puro añadiendo " = 0", esto convierte
	 * a la clase en abstracta y por tanto:
	 * - Las clases que hereden de esta deben implementar sus
	 *   métodos virtuales puros
	 * - Las clases abstractas no pueden instanciarse (si se pueden
	 *   declarar punteros)
	 */

	virtual float area() = 0;
};

} /* namespace ejemplos */

#endif /* CLASSESABSTRACTAS_POLIGONO_H_ */
