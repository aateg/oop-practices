#include "Perfil.h"
#include "Publicacao.h"

int main(){
  // 1.crie perfis
  Perfil *alberto = new Perfil("Alberto Costa");
  Perfil *bernarda = new Perfil("Bernarda Dantas");
  Perfil *carlos = new Perfil("Carlos Esteves");

  // 2. bernarda se torna seguidora de alberto
  alberto->adicionarSeguidor(bernarda);

  // 3. bernarda se torna seguidora de carlos
  carlos->adicionarSeguidor(bernarda);

  // 4. carlos se torna seguidor de alberto
  alberto->adicionarSeguidor(carlos);

  // 5. alberto publica
  alberto->publicar("Mensagem 1 (AC)");

  // 6. bernarda publica
  bernarda->publicar("Mensagem 2 (BD)");

  // 7. carlos publica
  carlos->publicar("Mensagem 3 (CE)");

  // 8. IMPRIME
  carlos->imprimir();
  alberto->imprimir();
  bernarda->imprimir();

  // 9. 10. 11. Destruir
  delete alberto;
  delete bernarda;
  delete carlos;
}