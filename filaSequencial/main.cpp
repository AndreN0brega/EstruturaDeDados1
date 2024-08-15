#include <iostream>
#include "FilaSequencial.h"

int main() {
    FilaSequencial fila;

    cout << "Lista esta vazia? ";
    if(fila.vazia())
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;    

    if(fila.inserir(1, 4))
        cout << "Elemento inserido com sucesso" << endl;
    else
        cout << "Falha ao inserir o elemento" << endl;
    fila.exibir();
    if(fila.inserir(2, 33))
        cout << "Elemento inserido com sucesso" << endl;
    else
        cout << "Falha ao inserir o elemento" << endl;
    fila.exibir();
    if(fila.inserir(6, 7))
        cout << "Elemento inserido com sucesso" << endl;
    else
        cout << "Falha ao inserir o elemento" << endl;
    fila.exibir();
    if(fila.inserir(1, 42))
        cout << "Elemento inserido com sucesso" << endl;
    else
        cout << "Falha ao inserir o elemento" << endl;
    fila.exibir();

    cout << "Tamanho da lista: " << fila.tamanho() << endl;

    cout << "Removendo o elemento " << fila.remover(2) << " da posicao 2" << endl;
    fila.exibir();
    cout << "Tamanho da lista: " << fila.tamanho() << endl;


    fila.exibir();
    cout << "Posicao do elemento 33: " << fila.procurarPos(33) << endl;
    cout << "Elemento da posicao 1:  " << fila.elemento(1) << endl;

    if(fila.modificar(1,7))
        cout << "Elemento da posicao 1 modificado por 7" << endl;
    else
        cout << "Elemento da posicao 1 nao pode ser modificado" << endl;
    fila.exibir();    

    cout << "Lista esta cheia? ";
    if(fila.cheia())
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;    

    return 0;
}