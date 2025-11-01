# include<iostream>
# include<cstdlib>
# include<cstring>
#include "Persona.h"

using namespace std;
// Constructor por defecto
Persona::Persona() {

protected:
    int _id;               // será asignado por la clase hija
    char _nombre[20];
    char _apellido[20];
    int _DNI;
    Direccion _direccion;
    int _telefono;
    char _email[40];
    bool _estado;

public:
    // Constructor por defecto
    Persona();

    // Getters
    int getID();
    const char* getNombre();
    const char* getApellido();
    int getDNI();
    Direccion getDireccion();
    int getTelefono();
    const char* getEmail();
    bool getEstado();

    // Setters
    void setID(int id);
    void setNombre(const char* nombre);
    void setApellido(const char* apellido);
    void setDNI(int dni);
    void setDireccion(Direccion direccion);
    void setTelefono(int telefono);
    void setEmail(const char* email);
    void setEstado(bool estado);

}
