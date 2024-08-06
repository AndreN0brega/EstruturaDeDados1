#include <iostream>
#include "listaSequencial.h"

int main() {
    ListaSequencial lista;
    int pos;

    cout << "Lista esta vazia? ";
    if(lista.vazia())
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;    

    if(lista.inserir(1, 4))
        cout << "Elemento inserido com sucesso" << endl;
    else
        cout << "Falha ao inserir o elemento" << endl;
    lista.exibir();
    if(lista.inserir(2, 33))
        cout << "Elemento inserido com sucesso" << endl;
    else
        cout << "Falha ao inserir o elemento" << endl;
    lista.exibir();
    if(lista.inserir(6, 7))
        cout << "Elemento inserido com sucesso" << endl;
    else
        cout << "Falha ao inserir o elemento" << endl;
    lista.exibir();
    if(lista.inserir(1, 42))
        cout << "Elemento inserido com sucesso" << endl;
    else
        cout << "Falha ao inserir o elemento" << endl;
    lista.exibir();

    cout << "Tamanho da lista: " << lista.tamanho() << endl;

    cout << "Removendo o elemento " << lista.remover(2) << " da posicao 2" << endl;
    lista.exibir();
    cout << "Tamanho da lista: " << lista.tamanho() << endl;


    lista.exibir();
    cout << "Posicao do elemento 33: " << lista.procurarPos(33) << endl;
    cout << "Elemento da posicao 1:  " << lista.elemento(1) << endl;

    if(lista.modificar(1,7))
        cout << "Elemento da posicao 1 modificado por 7" << endl;
    else
        cout << "Elemento da posicao 1 nao pode ser modificado" << endl;
    lista.exibir();    

    cout << "Lista esta cheia? ";
    if(lista.cheia())
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;    

    return 0;
}