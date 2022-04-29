#include <string>
#include <iostream>
using namespace std;

class Abuelo{
    private:
      string nombre;
    public:
    ~Abuelo(){}
     Abuelo(){}
     void setNombre(string nombre){
        this->nombre=nombre;
    }
     string getNombre(){
        return this->nombre;
    }
};


int main()
{
    Abuelo abb;
    abb.setNombre("Horacio Huertas");
    cout<<"Nombre:"<<abb.getNombre()<<endl;
    return 0;
}