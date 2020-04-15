#include "RedeSocial.h"
#include "Perfil.h"
#include <iostream>
using namespace std;

RedeSocial::RedeSocial(){ // eh assim que passa vetor como parametro?
  this->perfis = new Perfil*[this->capacidade];
  this->quantidadeDePerfis = 0;
}

RedeSocial::~RedeSocial() {
  cout << "Destrutor de RedeSocial: " << quantidadeDePerfis << " perfis" << endl;
  for (int i = 0; i < this->quantidadeDePerfis; i++){
    delete perfis[i];
  }
  cout << "RedeSocial deletada " << endl;
}

Perfil **RedeSocial::getPerfis(){
  return this->perfis;
}

int RedeSocial::getQuantidadeDePerfis(){
  return this->quantidadeDePerfis;
}

bool RedeSocial::adicionar(Perfil *perfil){
  if(this->quantidadeDePerfis < this->capacidade){
    this->perfis[this->quantidadeDePerfis] = perfil;
    this->quantidadeDePerfis++;
    return true;
  }
  return false;
}

void RedeSocial::imprimir () {
  cout << endl << "------------------------------ " << endl;
  cout << "RedeSocial: " << quantidadeDePerfis << " perfis" << endl;
  cout << "------------------------------ " << endl;
  if (quantidadeDePerfis == 0){
    cout << "Sem perfis" << endl;
    cout << "------------------------------ " << endl;
  } else {
    for (int i = 0; i < quantidadeDePerfis; i++){
      perfis[i]->imprimir();
      cout << "------------------------------ " << endl;
    }
  }
  cout << endl;
}