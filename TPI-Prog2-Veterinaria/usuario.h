#pragma once

class Usuario{
private:
    int idUsuario = 0;
    char clave[5] = {0};
    int nivelSeguridad = 0;

public:
    Usuario();
    Usuario(int, char, int);

    //Getters
    int getidUsuario();
    *char getClave();
    int getNivelSeguridad();
    //Setters
    void setidUsuario(int);
    void setClave(*char);
    void setNivelSeguridad(int);
};
