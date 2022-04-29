### Modificadores de acceso en C ++

Los modificadores de acceso se utilizan para implementar un aspecto importante de la programaci�n orientada a objetos conocido como ocultaci�n de datos 

Hay 3 tipos de modificadores de acceso disponibles en C ++: 

- P�blico 
- Privado
- Protegido

Nota : Si no especificamos ning�n modificador de acceso para los miembros dentro de la clase, por defecto el modificador de acceso para los miembros ser� Privado .

`P�blico` : Todos los miembros de la clase declarados bajo el especificador p�blico estar�n disponibles para todos. Los miembros de datos y las funciones de miembros declarados como p�blicos tambi�n pueden ser accedidos por otras clases y funciones. Se puede acceder a los miembros p�blicos de una clase desde cualquier lugar del programa utilizando el operador de acceso directo a miembros (.) Con el objeto de esa clase. <br>

`Privado` :  : Los miembros de la clase declarados como privados solo pueden ser accedidos por las funciones miembro dentro de la clase. No se permite que ning�n objeto o funci�n ajena a la clase acceda directamente a ellos. Solo las funciones de miembro o las funciones de amigo pueden acceder a los miembros de datos privados de una clase. <br>

`Protegido` : el modificador de acceso protegido es similar al modificador de acceso privado en el sentido de que no se puede acceder a �l fuera de su clase a menos que con la ayuda de la clase amiga, la diferencia es que cualquier miembro de la clase declarado como protegido puede ser accedido por cualquier subclase (clase derivada) de esa clase tambi�n <br>

Fuente: [https://www.geeksforgeeks.org/](https://www.geeksforgeeks.org/access-modifiers-in-c/)