#include <iostream>
#include "filaSequencial.h"

FilaSequencial::FilaSequencial(){
    inicio = 0;
    fim = -1;
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

int FilaSequencial::primeiro(){
    if(vazia())
        return -1;

    return dados[inicio];
}

bool FilaSequencial::inserir(int dado){
    if (cheia()){
        return false;
    }

    fim = (fim + 1) % tamMax;
    dados[fim] = dado;
    tamAtual++;

    return true;
}
int FilaSequencial::remover(){
    if(vazia())
        return -1;

    int dado = primeiro();
    inicio = (inicio + 1) % tamMax;
    tamAtual--;

    return dado;
}

void FilaSequencial::exibir(){
    if (vazia()) {
        cout << "A fila está vazia." << endl;
        return;
    }
    cout << "Elementos da fila: [";
    for (int i = 0; i < tamAtual; i++) {
        int indice = (inicio + i) % tamMax;
        cout << dados[i] << " ";
    }
    cout << "]"<< endl;
}