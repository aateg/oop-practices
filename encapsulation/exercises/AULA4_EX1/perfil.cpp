#include "perfil.h"
void Perfil::setNome(string nome) {
    this->nome = nome;
}

string Perfil::getNome(){
    return this->nome;
}

bool Perfil::adicionarSeguidor(Perfil *seguidor){
    // preciso comparar seguidores?
    for (int i=0; i<MAXIMO_SEGUIDORES; i++){
        if(this->seguidores[i] == NULL){
            this->seguidores[i] = seguidor;
            return true;
        }
    }
    return false;
}

bool Perfil::publicar(string texto){
}