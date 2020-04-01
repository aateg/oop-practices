#include "Perfil.h"
#include "Publicacao.h"

int main(){
  // 1.crie perfis
  Perfil *alberto = new Perfil();
  alberto->setNome("Alberto Costa");
  Perfil *bernarda = new Perfil();
  bernarda->setNome("Bernarda Dantas");
  Perfil *carlos = new Perfil();
  carlos->setNome("Carlos Esteves");

  // 2. bernarda se torna seguidora de alberto
  alberto->adicionarSeguidor(bernarda);

  // 3. bernarda se torna seguidora de carlos
  carlos->adicionarSeguidor(bernarda);

  // 4. carlos se torna seguidor de alberto
  alberto->adicionarSeguidor(carlos);

  // 5. alberto publica
  Publicacao *msg1 = new Publicacao();
  //msg1->setAutor()
  alberto->publicar("Mensagem 1 (AC)");

  // 6. carlos publica
  carlos->publicar("Mensagem 2 (CE)");

  // IMPRIME

  carlos->imprimir();
  alberto->imprimir();
  bernarda->imprimir();
}