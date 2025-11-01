#pragma once
#include <string>
class Persona{

private:
    int _id;
    char _nombre[20];
    char _apellido[20];
    int _DNI;
    Direccion _direccion;
    int telefono;
    char _email[40];
    bool _estado;
public:
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
    void setNombre(const char* nombre);
    void setApellido(const char* apellido);
    void setDNI(int dni);
    void setDireccion(Direccion direccion);
    void setTelefono(int telefono);
    void setEmail(const char* email);
    void setEstado(bool estado);

};
