#include "Publicacao.h"
#include <iostream>
using namespace std;

Publicacao::Publicacao(Perfil *autor, string texto){
    this->autor = autor;
    this->texto = texto;
}

Publicacao::~Publicacao(){
    cout << "Destrutor de publicacao: " << this->texto << endl;
    //delete &this->texto;
}

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