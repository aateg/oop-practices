#ifndef PUBLICACAO_H
#define PUBLICACAO_H

#include "Perfil.h"

#include <string>
using namespace std;

class Perfil;

class Publicacao {
    public:
        // Getters
        string getTexto();
        Perfil* getAutor();
        // Setters
        void setTexto(string nome);
        void setAutor(Perfil* autor);
        
    private:
        string texto;
        Perfil* autor;
};

#endif // PUBLICACAO_H