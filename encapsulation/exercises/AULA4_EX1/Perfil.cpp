#include "Perfil.h"
#include <iostream>

using namespace std;

void Perfil::setNome(string nome) {
    this->nome = nome;
}

string Perfil::getNome(){
    return this->nome;
}

bool Perfil::adicionarSeguidor(Perfil *seguidor){
    if (this->quantidadeDeSeguidores < MAXIMO_SEGUIDORES){
        this->seguidores[this->quantidadeDeSeguidores] = seguidor;
        this->quantidadeDeSeguidores++;
        return true;
    }
    return false;
}

bool Perfil::publicar(string texto){
    if (this->quantidadeDePublicacoesFeitas < MAXIMO_PUBLICACOES){
        this->publicacoesFeitas[this->quantidadeDePublicacoesFeitas] = texto;
        this->quantidadeDePublicacoesFeitas++;
        // publicar na rede de todos
        for (int i=0; i < this->quantidadeDeSeguidores; i++){
            this->seguidores[i]->receber(texto);
            //(*(*this).seguidores[i]).receber(texto); // outra maneira de escrever
        }
        return true;
    }
    return false;
}

bool Perfil::receber(string texto){
    if (this->quantidadeDePublicacoesRecebidas < MAXIMO_PUBLICACOES){
        this->publicacoesRecebidas[quantidadeDePublicacoesRecebidas] = texto;
        quantidadeDePublicacoesRecebidas++;
        return true;
    }
    return false;
}

void Perfil::imprimir() {
	cout << endl << "Seguidores: " << nome << endl;
    if (quantidadeDeSeguidores > 0){
        for (int i = 0; i < quantidadeDeSeguidores; i++){
            cout << "Seguidor "<< seguidores[i]->getNome() << endl;
        }
    } else {
        cout << "Sem seguidor " << endl;
    }

	cout << "Numero de publicacoes feitas: " << quantidadeDePublicacoesFeitas << endl;
	for (int i = 0; i < quantidadeDePublicacoesFeitas; i++){
        cout << "Publicacao " << i << " - Texto: " << publicacoesFeitas[i] << endl;
    }

    cout << "Numero de publicacoes recebidas: " << quantidadeDePublicacoesRecebidas << endl;
    for (int i = 0; i < quantidadeDePublicacoesRecebidas; i++){
        cout << "Publicacao " << i << " - Texto: " << publicacoesRecebidas[i] << endl;
    }

    cout << endl;
}