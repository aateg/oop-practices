#include "RedeSocial.h"
#include "Perfil.h"

int main() {
  // Crie uma RedeSocial
  RedeSocial *rede = new RedeSocial();

  // Crie e adicione a rede os perfis de Alberto Costa, Bernarda Dantas e Carlos Esteves
  Perfil *alberto = new Perfil("Alberto Costa");
  Perfil *bernarda = new Perfil("Bernarda Dantas");
  Perfil *carlos = new Perfil("Carlos Esteves");

  rede->adicionar(alberto);
  rede->adicionar(bernarda);
  rede->adicionar(carlos);

  // Faca Bernarda se tornar uma seguidora de Alberto
  alberto->adicionarSeguidor(bernarda);

  // Faca Bernarda se tornar uma seguidora de Carlos
  carlos->adicionarSeguidor(bernarda);

  // Faca Carlos se tornar um seguidor de Alberto
  alberto->adicionarSeguidor(carlos);

  // Alberto publica a mensagem "Mensagem 1 (AC)"
  alberto->publicar("Mensagem 1 (AC)");

  // Bernarda publica a mensagem "Mensagem 2 (BD)"
  bernarda->publicar("Mensagem 2 (BD)");

  // Carlos publica a mensagem "Mensagem 3 (CE)"
  carlos->publicar("Mensagem 3 (CE)");

  // Imprima a rede
  rede->imprimir();

  // Destrua a rede
  delete rede;

  return 0;
}
