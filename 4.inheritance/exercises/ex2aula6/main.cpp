#include "RedeSocial.h"
#include "Perfil.h"
#include "Professor.h"
#include "Disciplina.h"

int main() {
  // Crie uma RedeSocial
  RedeSocial *rede = new RedeSocial();

  // Declare uma variavel do tipo Perfil, atribuindo-lhe um objeto da classe Professor e o
  // inicialize com o nome “Prof. Nelson” e como o departamento “PCS”;
  Perfil *nelson = new Professor("Prof. Nelson", "PCS"); // principio da substituicao

  // Declare uma variavel do tipo Perfil, atribuindo-lhe um objeto da classe Perfil e o
  // inicialize com o nome “Gabriela Ferreira”;
  Perfil *gabriela = new Perfil("Gabriela Ferreira");

  // Declare uma variavel do tipo Perfil, atribuindo-lhe um objeto da classe Disciplina e o
  // inicialize com a sigla “PCS3210”, nome “Algoritmos I”, sob responsabilidade do Prof.
  // Nelson. Use o static_cast para converter o perfil de Prof. Nelson para o tipo Professor
  Disciplina *pcs3210 = new Disciplina("PCS3210", "Algoritmos I", nelson);
  // TODO converter perfil -> disciplina

  // Declare uma variavel do tipo Perfil, atribuindo-lhe um objeto da classe Disciplina e o
  // inicialize com o nome “PCS3211”, nome “Algoritmos II”, e tambem sob responsabilidade
  // do Prof. Nelson. Use o static_cast para converter o perfil de Prof. Nelson para o tipo
  // Professor e para converter PCS3211 para o tipo Disciplina.
  Disciplina *pcs3211 = new Disciplina("PCS3211", "Algoritmos II", nelson);
  // TODO converter perfil -> disciplina

  // adicione os dois perfis a rede
  rede->adicionar(nelson);
  rede->adicionar(gabriela);
  rede->adicionar(pcs3210);
  rede->adicionar(pcs3211);

  // Faca Gabriela se tornar uma seguidora de Nelson
  nelson->adicionarSeguidor(gabriela);

  // Faca Gabriela  se tornar uma seguidora de PCS3210 e PCS3211
  pcs3210->adicionarSeguidor(gabriela);
  pcs3211->adicionarSeguidor(gabriela);

  // Prof. Nelson publica a mensagem "Mensagem N1"
  nelson->publicar("Mensagem N1");

  // gabriela publica a mensagem "Mensagem G1"
  gabriela->publicar("Mensagem G1");

  // pcs3211 publica a mensagem "Mensagem D1"
  pcs3211->publicar("Mensagem D1");
  
  // Imprima a rede
  rede->imprimir();

  // Destrua a rede
  delete rede;

  return 0;
}
