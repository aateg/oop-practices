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
        // cria publicacao
        Publicacao *p = new Publicacao();
        p->setAutor(this);
        p->setTexto(texto);

        // adiciona publicacao
        this->feitas[this->quantidadeDePublicacoesFeitas] = p;
        this->quantidadeDePublicacoesFeitas++;

        // adiciona so perfil dos seguidores
        for (int i=0; i < this->quantidadeDeSeguidores; i++){
            this->seguidores[i]->receber(p);
            //(*(*this).seguidores[i]).receber(p); // outra maneira de escrever
        }
        return true;
    }
    return false;
}

bool Perfil::receber(Publicacao *p){
    if (this->quantidadeDePublicacoesRecebidas < MAXIMO_PUBLICACOES){
        this->recebidas[quantidadeDePublicacoesRecebidas] = p;
        quantidadeDePublicacoesRecebidas++;
        return true;
    }
    return false;
}

void Perfil::imprimir() {
    cout << "PERFIL: " << nome << endl;
    if (quantidadeDeSeguidores > 0){
        for (int i = 0; i < quantidadeDeSeguidores; i++){
            cout << "Seguidor: "<< seguidores[i]->getNome() << endl;
        }
    } else {
        cout << "Sem seguidor " << endl;
    }

	cout << "Numero de publicacoes feitas: " << quantidadeDePublicacoesFeitas << endl;
	for (int i = 0; i < quantidadeDePublicacoesFeitas; i++){
        cout << "Publicacao " << i << endl;
        cout << "Autor: " << feitas[i]->getAutor()->getNome() << endl;
        cout << "Texto: " << feitas[i]->getTexto() << endl;
    }

    cout << "Numero de publicacoes recebidas: " << quantidadeDePublicacoesRecebidas << endl;
    for (int i = 0; i < quantidadeDePublicacoesRecebidas; i++){
        cout << "Publicacao " << i << endl;
        cout << "Autor: " << recebidas[i]->getAutor()->getNome() << endl;
        cout << "Texto: " << recebidas[i]->getTexto() << endl;
    }
    cout << "" << endl;
}
