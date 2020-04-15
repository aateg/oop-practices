#include "RedeSocial.h"
#include "Perfil.h"
#include "Professor.h"

int main() {
  // Crie uma RedeSocial
  RedeSocial *rede = new RedeSocial();

  // Declare uma variavel do tipo Perfil, atribuindo-lhe um objeto da classe Professor e o
  // inicialize com o nome “Prof. Nelson” e como o departamento “PCS”;
  Perfil *nelson = new Professor("Prof. Nelson", "PCS"); // principio da substituicao

  // Declare uma variavel do tipo Perfil, atribuindo-lhe um objeto da classe Perfil e o
  // inicialize com o nome “Gabriela Ferreira”;
  Perfil *gabriela = new Perfil("Gabriela Ferreira");

  // adicione os dois perfis a rede
  rede->adicionar(nelson);
  rede->adicionar(gabriela);

  // Faca Gabriela  se tornar uma seguidora de Nelson
  nelson->adicionarSeguidor(nelson);

  // Prof. Nelson publica a mensagem "Mensagem N1"
  nelson->publicar("Mensagem N1");

  // gabriela publica a mensagem "Mensagem G1"
  gabriela->publicar("Mensagem G1");
  
  // Imprima a rede
  rede->imprimir();

  // Destrua a rede
  delete rede;

  return 0;
}
