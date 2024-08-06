#include <iostream>
#include "listaEncadeada.h"

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
    if (pos < 1 || pos > tamAtual + 1)
        return;

    No* novoNo = new No(valor);

    if(pos == 1) {
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

}

void ListaEncadeada::exibir(){

}