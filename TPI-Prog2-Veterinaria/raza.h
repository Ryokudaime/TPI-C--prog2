#pragma once

class Raza{

private:
    int idRaza;
    char descripcionRaza[20];
    char descripcionAnimal [20];
    bool estadoRaza;

public:
    int getIdraza();
    *char descripcionRaza();
    *char descripcionAnimal();
    bool estadoRaza();

    void setIdraza(int);
    void descripcionRaza(*char);
    void descripcionAnimal(*char);
    void estadoRaza(bool);

};
