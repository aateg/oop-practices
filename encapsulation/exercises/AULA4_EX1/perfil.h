#define MAXIMO_PUBLICACOES 20
#define MAXIMO_SEGUIDORES 20
#include <iostream>
using namespace std;
class Perfil {
    public:
        // Adiciona um perfil como seguidor deste perfil.
        bool adicionarSeguidor(Perfil* seguidor);
        // Faz uma publicacao, que eh divulgada a todos os seguidores do perfil.
        bool publicar(string texto);
        // Recebe as publicacoes feitas por um Perfil seguido.
        bool receber(string texto);
        // Imprime o Perfil.
        void imprimir ();
        // Getters e setters
        string getNome();
        void setNome (string nome);
        
    private:
        // Atributos
        string nome;
        Perfil *seguidores[MAXIMO_SEGUIDORES];
        int quantidadeDeSeguidores = 0;
        string publicacoesFeitas[MAXIMO_PUBLICACOES];
        int quantidadeDePublicacoesFeitas = 0;
        string publicacoesRecebidas[MAXIMO_PUBLICACOES];
        int quantidadeDePublicacoesRecebidas = 0;
};