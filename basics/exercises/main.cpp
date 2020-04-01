#include <iostream>
#include <string>

#define MAXIMO_PUBLICACOES 2

using namespace std;

class Perfil {
public:
  string nome;
  Perfil* seguidor = NULL;
  string publicacoesFeitas[MAXIMO_PUBLICACOES];
  //Perfil seguidores[1000]; // dar um jeito de inicializar tudo em NULL
  string publicacoesRecebidas[MAXIMO_PUBLICACOES];
  int quantidadeDePublicacoesFeitas = 0;
  int quantidadeDePublicacoesRecebidas = 0;

  /**
   * Adiciona um perfil como seguidor deste perfil.
   * O metodo deve retornar verdadeiro se foi possivel adicionar o seguidor
   * ou false caso ele ja tenha um seguidor.
   */
  bool adicionarSeguidor(Perfil* seguidor);

  /**
   * Faz uma publicacao, que deve ser armazenada nas publicacoes do proprio perfil,
   * e tambem divulgada a todos os seguidores do perfil, atraves da chamada do
   * metodo receber de seus seguidores. O metodo deve retornar verdadeiro se foi
   * possivel adicionar a publicacao a lista de publicacoes feitas deste perfil,
   * ou false caso nao haja mais espaco para publicacoes no vetor.
   */
  bool publicar(string texto);

  /**
   * Recebe a publicacao feita por um Perfil seguido. O metodo deve retornar
   * verdadeiro se foi possivel adicionar a publicacao a lista de publicacoes recebidas
   * deste perfil, ou false caso nao haja mais espaco para publicacoes no vetor.
   */
  bool receber(string texto);

  /**
   * Imprime o perfil. Este metodo ja esta implementado.
   */
  void imprimir();
};

// IMPLEMENTE OS METODOS DA CLASSE

void Perfil::imprimir() {
	cout << endl << "Nome: " << nome << endl;
	if (seguidor != NULL)
		cout << "Seguidor "<< seguidor->nome << endl;
	else
		cout << "Sem seguidor " << endl;

	cout << "Numero de publicacoes feitas: " << quantidadeDePublicacoesFeitas << endl;
	for (int i = 0; i < quantidadeDePublicacoesFeitas; i++)
		cout << "Publicacao " << i << " - Texto: " << publicacoesFeitas[i] << endl;

  cout << "Numero de publicacoes recebidas: " << quantidadeDePublicacoesRecebidas << endl;
  for (int i = 0; i < quantidadeDePublicacoesRecebidas; i++)
		cout << "Publicacao " << i << " - Texto: " << publicacoesRecebidas[i] << endl;
}

bool Perfil::adicionarSeguidor(Perfil* seguidor){
    if (this -> seguidor == NULL){
        this -> seguidor = seguidor;
        return true;
    }
    return false;
}

bool Perfil::publicar(string texto){
    if (this->quantidadeDePublicacoesFeitas < MAXIMO_PUBLICACOES){
        this -> publicacoesFeitas[quantidadeDePublicacoesFeitas] = texto;
        quantidadeDePublicacoesFeitas++;
        if (this ->seguidor != NULL){
            //this -> seguidor -> receber(texto);
            (*(*this).seguidor).receber(texto);
        }
        return true;
    }
    return false;
}

bool Perfil::receber(string texto){
    if (this -> quantidadeDePublicacoesRecebidas < MAXIMO_PUBLICACOES){
        this -> publicacoesRecebidas[quantidadeDePublicacoesRecebidas] = texto;
        quantidadeDePublicacoesRecebidas++;
        return true;
    }
    return false;
}

void imprimirRede (Perfil* p1, Perfil* p2) {
  cout << endl << " ------------------------------ ";
  p1->imprimir();
  cout << " ------------------------------ ";
  p2->imprimir();
  cout << " ------------------------------ " << endl << endl;
 }

int main() {
  cout << endl << " ===== Cria perfil de Antonio Silva" << endl;
  Perfil *antonio = new Perfil();
  antonio -> nome = "Antonio Silva";

  cout << " ===== Cria perfil da Ana Soares" << endl;
  Perfil *ana = new Perfil();
  ana -> nome = "Ana Soares";

  cout << " ===== Ana segue Antonio"<< endl;
  antonio -> adicionarSeguidor(ana);

  cout << " ===== Ana publica Msg 1 de Ana"<< endl;
  ana -> publicar("Msg 1 de Ana");

  imprimirRede (ana, antonio);

  cout << " ===== Antonio publica Msg 1 de Antonio"<< endl;

  antonio -> publicar("Msg 1 de Antonio");

  imprimirRede(ana, antonio);

  cout << " ===== Antonio segue Ana"<< endl;
  ana -> adicionarSeguidor(antonio);

  cout << " ===== Ana publica Msg 2 de Ana"<< endl;
  ana -> publicar("Msg 2 de Ana");

  // TIRE O COMENTARIO E IMPLEMENTE
  imprimirRede(ana, antonio);

  return 0;
}
