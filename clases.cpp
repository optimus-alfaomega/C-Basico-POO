// Clases en C++

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Persona {
	
// Atributos
private:
	string nombre;
	int edad;
	
	
// M�todos
public:
	Persona(string, int); // Constructor
	void leer();
	void correr();
};


// Implementaci�n del constructor. Sirve para inicializar los atributos de la clase
Persona::Persona(string _nombre, int _edad){
	edad  = _edad;
	nombre = _nombre;
}


void Persona::leer(){
	cout << "Estoy leyendo los h�bitos de la gente altamente efectiva (" << nombre << ")" << endl;	
}

void Persona::correr(){
	cout << "Soy " << nombre << " y tengo " << edad << " a�os." << endl; 
}


int main(){
	Persona juan = Persona("Juan Perez", 22);
	juan.leer();
	
	Persona maria = Persona("Maria", 12);
	maria.correr();
	
	system("pause");
	return 0;
}
