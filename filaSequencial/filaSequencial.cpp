#include <iostream>
#include "filaSequencial.h"

FilaSequencial::FilaSequencial(){
    tamAtual = 0;
    tamMax = 144;
}

bool FilaSequencial::vazia(){
    return tamAtual == 0;
}
bool FilaSequencial::cheia(){
    return tamAtual == tamMax;
}

int FilaSequencial::tamanho(){
    return tamAtual;
}
int FilaSequencial::elemento(int pos){
    if (pos < 1 || pos > tamAtual){
        return -1;
    }
    
    return dados[pos -1];
}

bool FilaSequencial::modificar(int pos, int dado){
    if (pos < 1 || pos > tamAtual){
        return false;
    }
    dados[pos - 1] = dado;

    return true;
}
int FilaSequencial::procurarPos(int dado){
    for (int i = 0; i < tamAtual; i++){
        if (dados[i] == dado) {
            return i + 1;
        }
    }
    return -1;
}

bool FilaSequencial::inserir(int pos, int dado){
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
int FilaSequencial::remover(int pos){
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

void FilaSequencial::exibir(){
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