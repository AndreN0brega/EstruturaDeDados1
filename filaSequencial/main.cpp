#include <iostream>
#include "FilaSequencial.h"

int main() {
    FilaSequencial fila;

    cout << "Lista esta vazia? ";
    if(fila.vazia())
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;    

    if(fila.inserir(4))
        cout << "Elemento inserido no final com sucesso" << endl;
    else
        cout << "Falha ao inserir o elemento" << endl;
    fila.exibir();
    if(fila.inserir(33))
        cout << "Elemento inserido no final com sucesso" << endl;
    else
        cout << "Falha ao inserir o elemento" << endl;
    fila.exibir();
    if(fila.inserir(7))
        cout << "Elemento inserido no final com sucesso" << endl;
    else
        cout << "Falha ao inserir o elemento" << endl;
    fila.exibir();
    if(fila.inserir(42))
        cout << "Elemento inserido no final com sucesso" << endl;
    else
        cout << "Falha ao inserir o elemento" << endl;
    fila.exibir();

    cout << "Tamanho da lista: " << fila.tamanho() << endl;

    cout << "Removendo um elemento do inicio, que foi: " << fila.remover() << endl;
    fila.exibir();
    cout << "Removendo um elemento do inicio, que foi: " << fila.remover() << endl;
    fila.exibir();
    cout << "Tamanho da lista: " << fila.tamanho() << endl;


    fila.exibir();
    cout << "Primeiro elemento: " << fila.primeiro() << endl;  

    cout << "Lista esta cheia? ";
    if(fila.cheia())
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;    

    return 0;
}