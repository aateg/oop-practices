#include "Publicacao.h"
#include <string>
using namespace std;

// getters
string Publicacao::getTexto(){
    return this->texto;
}

Perfil *Publicacao::getAutor(){
    return this->autor;
}

// setters
void Publicacao::setTexto(string nome){
    this->texto = nome;
}

void  Publicacao::setAutor(Perfil *autor){
    this->autor = autor;
}