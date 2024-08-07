#include <iostream>
#include "listaEncadeada.h"

using namespace std;

ListaEncadeada::ListaEncadeada(){
    tamAtual = 0;
    cabeca = nullptr;
}
ListaEncadeada::~ListaEncadeada(){

}

bool ListaEncadeada::vazia(){
    return tamAtual == 0;
}
int ListaEncadeada::tamanho(){
    return tamAtual;
}

int ListaEncadeada::elemento(int pos){
    if(vazia())
        return -1;
    
    if(pos < 1 || pos > tamAtual)
        return -1;

    No* aux = cabeca;
    for(int i = 1; i < pos; i++)
        aux = aux->prox;

    return aux->dado;
}
void ListaEncadeada::modificar(int pos, int valor){
    if(pos < 1 || pos > tamAtual)
        return;

    No* aux = cabeca;
    for(int i = 1; i < pos; ++i)
        aux = aux->prox;

    aux->dado = valor;
}

void ListaEncadeada::inserir(int pos, int valor){
    if(pos < 1 || pos > tamAtual + 1)
        return;

    No* novoNo = new No(valor);

    if(pos == 1){
        novoNo->prox = cabeca;
        cabeca = novoNo;
    }else{
        No* aux = cabeca;
        for(int i = 1; i < pos - 1; ++i)
            aux = aux->prox;

        novoNo->prox = aux->prox;
        aux->prox = novoNo;
    }
    tamAtual++;
}
void ListaEncadeada::retirar(int pos){
    if(pos < 1 || pos > tamAtual)
        return;

    No* aux = cabeca;

    if(pos == 1){
        cabeca = aux->prox;
        delete aux;
    }else{
        No* anterior = nullptr;
        for (int i = 1; i < pos; ++i){
            anterior = aux;
            aux = aux->prox;
        }
        anterior->prox = aux->prox;
        delete aux;
    }
    tamAtual--;
}

void ListaEncadeada::exibir(){
    if(vazia()){
        cout << "A lista está vazia." << endl;
        return;
    }
    cout << "Elementos da lista: (";
    
    No* aux = cabeca;

    for (int i = 0; i < tamAtual; i++) {
        cout << aux->dado;
        aux = aux->prox;
        if(i < tamAtual - 1){
            cout << " -> ";
        }
    }
    cout << ")" << endl;
}