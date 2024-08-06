#include <iostream>
#include "listaSequencial.h"

ListaSequencial::ListaSequencial(){
    tamAtual = 0;
    tamMax = 144;
}

bool ListaSequencial::vazia(){
    return tamAtual == 0;
}
bool ListaSequencial::cheia(){
    return tamAtual == tamMax;
}

int ListaSequencial::tamanho(){
    return tamAtual;
}
int ListaSequencial::elemento(int pos){
    if (pos < 1 || pos > tamAtual){
        return -1;
    }
    
    return dados[pos -1];
}

bool ListaSequencial::modificar(int pos, int dado){
    if (pos < 1 || pos > tamAtual){
        return false;
    }
    dados[pos - 1] = dado;

    return true;
}
int ListaSequencial::procurarPos(int dado){
    for (int i = 0; i < tamAtual; i++){
        if (dados[i] == dado) {
            return i + 1;
        }
    }
    return -1;
}

bool ListaSequencial::inserir(int pos, int dado){
    if (cheia()){
        return false;
    }
    if (pos < 1 || pos > tamAtual + 1){
        return false;
    }
    for (int i = tamAtual; i >= pos; i--){
        dados[i] = dados[i - 1];
    }
    dados[pos - 1] = dado;
    tamAtual++;

    return true;
}
int ListaSequencial::remover(int pos){
    if (pos < 1 || pos > tamAtual){
        return -1;
    }
    int dado = dados[pos - 1];
    for (int i = pos - 1; i < tamAtual - 1; i++){
        dados[i] = dados[i + 1];
    }
    tamAtual--;

    return dado;
}

void ListaSequencial::exibir(){
    if (vazia()) {
        cout << "A lista está vazia." << endl;
        return;
    }
    cout << "Elementos da lista: [";
    for (int i = 0; i < tamAtual; i++) {
        cout << dados[i];
        if(i < tamAtual - 1){
            cout << ", ";
        }
    }
    cout << "]"<< endl;
}